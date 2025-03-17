#include<iostream>
using namespace std;
void Balance(double Amount);
double Deposit();
double Withdraw(double Amount);



int main(){
	double Amount=0;
	int choice;
	do{
	cout<<"-------PROJECT BANKING SYSTEM--------\n";
	cout<<"Please make a choice\n";
	cout<<"1 = Account balance\n";
	cout<<"2 = Deposit money\n";
	cout<<"3 = Withdraw money\n";
	cout<<"4 = Exit\n";
	cin>>choice;
	switch(choice){
	case 1: 
	cout<<"Your account balance is $";
	Balance(Amount);
			break;
	case 2:
	Amount += Deposit();
	cout<<"Your account balance is $";
	Balance(Amount);
			break;
	case 3:
	Amount -= Withdraw(Amount);
	cout<<"You account balance is $";
	Balance(Amount);
			break;		
	case 4:
	cout<<"Thanks for visiting\n";
			break;		
	default: cout<<"Invalid choice\n";
	}
	}while(choice !=4);

	return 0;
}
void Balance(double Amount){
	cout<<Amount<<"\n";
}
double Deposit(){

	double deposit;
	cout<<"How much money do you want to deposit?\n";
	cin>>deposit;
	if(deposit>=0){
    return deposit;
	}
	else{
		cout<<"That is a invalid amount\n";
		return 0;
	}
}
double Withdraw(double Amount){
    double withdraw;
	cout<<"Please type in the amount of money you want to withdraw\n";
	cin>>withdraw;
	if(withdraw > Amount){
		cout<<"\033[031m"<<"Insufficient fund\n"<<"\033[0m\n";
		return 0;}
	else if(withdraw<0){
		cout<<"The amount can't be negative\n";
		return 0;
	}
	else{
		cout<<"\033[32m"<<"$"<<withdraw<<" successfully withdrawn\n"<<"\033[0m";
		return withdraw;
	}
	
	
}