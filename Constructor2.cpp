#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    string name, gender;
    float salary;

public:
    Employee()
    {
    }
    void Input()
    {
        cout << "Enter in the Name:";
        cin >> name;
        cout << "Enter in the ID:";
        cin >> id;
        cout << "Enter in the gender:";
        cin >> gender;
        cout << "Enter in the salary:";
        cin >> salary;
        system("cls");
    }
    void output()
    {
        cout << "Name:" << name << endl;
        cout << "ID:" << id << endl;
        cout << "Gender:" << gender << endl;
        cout << "Salary:" << salary << endl;
    }
};
int main()
{
    Employee Em[2];
    for (int i = 0; i < 2; i++)
    {
        Em[i].Input();
    }
    for (int i = 0; i < 2; i++)
    {
        Em[i].output();
    }
    return 0;
}