#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;
    cout <<"The value of a is :" << a <<endl;

    *p = 20;
    
    cout <<"The value of the changed a is : "<< *p <<endl;
    cout <<"The address of a is : "<< p <<endl;
    cout <<"The address of pointer p is : "<< &p <<endl;
    return 0;
}