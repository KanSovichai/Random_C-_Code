// simple 2 degits calculator code
#include <iostream>
using std::cin;
using std::cout;
int main()
{
    //Declare variables
    int FirstNum;
    int SecondNum;
    double Result;
    char Operator;
    cout<<"Enter in the problem to solve\n";
    cout<<"Only put in the 2 degit problem"<<std::endl;
    cin>>FirstNum;
    cin>>Operator;
    cin>>SecondNum;
    switch(Operator){
        case '+':
        Result=FirstNum+SecondNum;
        break;
        case '-':
        Result=FirstNum-SecondNum;
        break;
        case '*':
        Result=FirstNum*SecondNum;
        break;
        case '/':
        Result=FirstNum/SecondNum;
        break;
    }
    cout<<"The result of  "<<FirstNum<<Operator<<SecondNum<<"="<<Result<<std::endl;
    return 0;
}