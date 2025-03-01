#include<iostream>

using namespace std;
int main(){
	
	string name; 
	int age;
	int tel;
	system("color B");
	cout<<"Please complete your personal information! \n";
	cout<<"What's your full name?"<<endl; 
	getline(cin, name);
 	
	cout<<"How old are you? \n";
	system("color D");
	cin>> age;
	cout<<"What's your telephone number? \n";
	system("color 4");
	cin>>tel;
	system("color C");
	cout<<"What city/province you currently live in?"<<endl;
	string address;
	
	getline(cin>>ws, address);
	system("color E");
	cout<<"\033[031m "<<"What is the goal that you want to achieve the most?\n";
	string goal;
	getline(cin,goal);
	
	
	cout<<"\nThanks for your time! \n";
	cout<<"Here is your personal information:\n";
	
	cout<< "Your name is " <<name <<"\n";
	cout<<"You are "<<age <<" years old \n";
	cout<<"Your phone number is 0" <<tel <<"\n";
	cout<<"You currently live in "<<address<<"\n";
	cout<<"Your goal is "<<goal;
	system("color A");
	
	return 0;
}
