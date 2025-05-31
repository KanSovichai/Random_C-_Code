#include <iostream>
using namespace std;
class Infor
{
protected:
    string name;

public:
    void Input()
    {
        cout << "Enter in the name: " << endl;
        cin >> name;
    }
    void Output()
    {
        cout << "Name:" << name << endl;
    }
};
//
class Student : virtual public Infor
{
private:
    int id;

public:
    Student(string name,int id) :Infor(name),id(id)
    {
    }
    void Input()
    
    {
        cout << "Enter in the ID:";
        cin >> id;
    }
    void Output()
    {
        cout << "ID:" << id << endl;
    }
};
class Employee : virtual public Infor
{
private:
    float salary;
public:
    Employee(string name,float salary):Infor(name),salary(salary){
    }
    void Input()
    {
        cout << "Enter in the salary:";
        cin >> salary;
    }
    void Output()
    {
        cout << "Salary:" << salary << endl;
    }
};
class Teacher : public Student,public Employee{
    private:
    int tag;
    public:
    Teacher(string name,int id,float salary,int tag):Infor(name),Student(id),Employee(salary),tag(tag){
    }
    void Input()
    {   
        Infor::Input();
        Student::Input();
        Employee::Input();
        cout << "Enter in the tag number:";
        cin >> tag;
    }
    void Output()
    {   
        Infor::Output();
        Student::Output();
        Employee::Output();
        cout << "Tag Number:" << tag << endl;
    }
};
int main(){
    Teacher ch("chai",11,1000,1290);
    ch.Input();
    ch.Output();

    return 0;
}