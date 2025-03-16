#include<iostream>
using namespace std;
int SplitAndSum(const int number);
int SumSecondDigits(const string CardNumber);
int SumFirstDigits(const string CardNumber);
int main(){
    string CardNumber;
    
    int Checker=0;
    A:
    cout<<"______Credit Card Validator_______"<<endl;
    cout<<"Please enter in the  card number(q to quit)\n";
    cin>>CardNumber;
    Checker=SumSecondDigits(CardNumber) + SumFirstDigits(CardNumber);
    if(CardNumber=="q"){
        system("cls");
        cout<<"Thanks";
    }
    
    else{
    
    if(Checker % 10 == 0){
        system("cls");
        cout<<"\033[032m"<<"VALID"<<"\033[0m"<<endl;
        
    }
    
    else{
        system("cls");
        cout<<"\033[031m"<<"INVALID"<<"\033[0m"<<endl;
        
    }
    goto A;
    }
    return 0;
}
int SplitAndSum(const int number){
    return number % 10 + (number / 10 % 10);
}
int SumSecondDigits(const string CardNumber){
    int Sum=0;
    for(int i=CardNumber.size()-2; i>=0; i-=2){
        Sum+=SplitAndSum((CardNumber[i] - '0')*2);
    }
    return Sum;
}
int SumFirstDigits(const string CardNumber){
    int Sum=0;
    for(int i = CardNumber.size()-1; i>=0; i-=2){
        Sum+=CardNumber[i] - '0';
    }
    return Sum;
}