#include<iostream>
#include<string.h>
using std::cout;
using std::cin;
int main(){
    //use strcmp(variable, "input")==0 to compare if the 2 value is the same
    //use char for variable because
    //in coding they convert char to string
    char mood[10];
    cout<<"How don you feel right now? \n";
    cin>>mood;
    strcmp(mood,"sad")==0 ? cout<<"Drink\n" : cout<<"Coding time\n";
    return 0;
}