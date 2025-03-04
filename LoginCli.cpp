#include<iostream>
//add this header file for delay (usleep(value in microsecond))
#include<unistd.h>
using namespace std;
void LoginUser(string User, string Pass);
int main(){
	string User,Pass;
	char loading[]={'L','O','A','D','I','N','G'};
	
	cout<<"Please register your username: ";getline(cin, User);
	cout<<"Please register your password: ";getline(cin, Pass);
	cout<<"\n\n";
	system("cls");
	LoginUser(User,Pass);
	system("cls");
	cout<<"\n\n\n\n\t\t\t\t\t";
	for(int i=0; i<sizeof(loading)/sizeof(char); i++){
			cout<<"\033[0m"<<loading[i]<<"\033[0m";
			usleep(500000);		
		}
		system("cls");
		cout<<"\033[032m"<<"\n\n\n\n\t\t\t\t\tLogin successful"<<"\033[0m"<<endl;
	return 0;
}
void LoginUser(string User , string Pass ){
	string Username,Password;
	do{
	A:cout<<"Please enter your username: ";getline(cin, Username);
	B:cout<<"Please enter your password: ";getline(cin, Password);
	if(Username==User && Password== Pass){
		cout<<""<<endl;
	}
	else if(Username!=User ){
		cout<<"\033[031m"<<"Incorrect username"<<"\033[0m"<<"\n"<<endl;
		goto A;
	}
	else if(Password!=Pass){
		cout<<"\033[031m"<<"Incorrect password"<<"\033[0m"<<"\n"<<endl;
		goto B;
	}
	else{
		cout<<"\033[031m"<<"Login unsuccessful"<<"\033[0m"<<endl;
		

	}
	}while(Username!=User || Password!= Pass);
}