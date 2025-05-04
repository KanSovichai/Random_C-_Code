#include <iostream>
using namespace std;
class Animal
{
public:
    // Abstract Function is a function that only have a name(Nothing inside)
    virtual void makeSound() = 0;
    virtual void eat()
    {
        cout << "Eating sound" << endl;
    }
};
class Dog : public Animal
{
    void makeSound() override
    {
        cout << "Woof" << endl;
    }
    void eat() override
    {
        cout << "Eating Dog food" << endl;
    }
};
class Cat : public Animal
{
    void makeSound() override
    {
        cout << "Meow" << endl;
    }
    void eat() override
    {
        cout << "Eating Cat food" << endl;
    }
};
int main()
{
    Animal *Animal1 = new Dog();
    Animal *Animal2 = new Cat();
    Animal1->makeSound();
    Animal2->makeSound();
    Animal1->eat();
    Animal2->eat();
    delete Animal1;
    delete Animal2;
    return 0;
}