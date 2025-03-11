#include <iostream>
// Struct is a funtion that store many datatype for sth
struct Student
{
    std::string name;
    int age;
    double GPA;
    bool enrolled;
};
// pass a struct as an argument
void StudentInfo(Student &Info);
int main()
{
    Student student1;
    student1.name = "Kan Sovichai";
    student1.age = 18;
    student1.GPA = 2.5;
    student1.enrolled = false;

    Student student2;
    student2.name = "Kan Sovichai";
    student2.age = 19;
    student2.GPA = 2.7;
    student2.enrolled = true;
    StudentInfo(student1);
    StudentInfo(student2);

    return 0;
}
void StudentInfo(Student &Info)
{

    std::cout << Info.name << "\n";
    std::cout << Info.age << "\n";
    std::cout << Info.GPA << "\n";
    (Info.enrolled == true) ? std::cout << "Enrolled\n" : std::cout << "Not Enrolled\n";
}