#include<iostream>
using namespace std;
class Animal{
    public:
    //virtual function can be overridden in derived classes
    virtual void makeSound(){
        cout << "Animal sound" << endl;
    }
};
class Dog:public Animal{
    //override the function
    void makeSound(){
        cout << "Dog sound" << endl;
    }
};
class Cat:public Animal{
    //override the function
    void makeSound(){
        cout << "Cat sound" << endl;
    }
};
int main(){
    Animal *Animal1 = new Dog; // create a Dog object
    Animal *Animal2 = new Cat; // create a Cat object
    Animal1->makeSound(); // call the makeSound function
    Animal2->makeSound(); // call the makeSound function
    delete Animal1;
    delete Animal2;
    return 0;
}