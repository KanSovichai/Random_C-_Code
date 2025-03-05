#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int ID;
string name;
float Salary,rate,Total;
int hour;
char Gender;
cout<<"Enter the ID: ";cin>>ID;
cout<<"Enter the Name: ";
getline(cin>>ws, name);
cout<<"Enter gender: ";cin>>Gender;
cout<<"Enter the Salary: ";cin>>Salary;
cout<<"Enter the Hourly rate: ";cin>>rate;
cout<<"Enter the extra hour: ";cin>>hour;
cout<<setw(10)<<"Name";
cout<<setw(7)<<"ID";
cout<<setw(10)<<"Gender";
cout<<setw(15)<<"Total Salary"<<endl;
cout<<setw(10)<<name;
cout<<setw(10)<<ID;
cout<<setw(6)<<Gender;
Total=Salary+rate*hour;
cout<<setw(10)<<Total;

    return 0;
}