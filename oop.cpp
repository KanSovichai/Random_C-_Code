#include <iostream>
#include <ctime>
using std::cin;
using std::cout;
using std::string;
class Human
{
public:
    string name;
    string job;
    int age;
    void eat()
    {
        cout << name << " is eating\n";
    }
    void work()
    {
        cout << name << " is working\n";
    }
    void sleep()
    {
        cout << name << " is sleeping" << std::endl;
    }
};

int main()

{
    srand(time(0));
    int actions = rand() % 2+1;
    Human human1;
    human1.name = "Chai";
    human1.job = "DEV";
    human1.age = 19;
    cout << human1.name << std::endl;
    cout << human1.job << std::endl;
    cout << human1.age << std::endl;
    switch (actions)
    {
    case 1:
        human1.eat();
        break;
    case 2:
        human1.work();
        break;
    case 3:
        human1.sleep();
        break;
    }
    return 0;
}