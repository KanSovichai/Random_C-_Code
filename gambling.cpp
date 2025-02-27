#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;
int ComGuess();
double ShowBalance(double Balance);
double Deposit();
double Withdraw(double Balance);
double BetCost(double Balance);
int main(){
    int Computer,choice;
    char option;
    double Balance = ShowBalance(Balance),winning;
    string Ans;
    do{
            cout<<"----------Gambling Game------------\n";
            cout<<"\tPress 1 to check balance\n";
            cout<<"\tPress 2 to bet(Cost 15$ per bet)\n";
            cout<<"\tPress 3 to exit\n";
            cin>>option;
            if(option=='1'){
                char WithAndDepo;
                do{
                cout<<fixed<<setprecision(2)<<"Your account balance is $"<<Balance<<endl;
                cout<<"\t\tPress 1 to deposit money\n";
                cout<<"\t\tPress 2 to withdraw money\n";
                cout<<"\t\tPress 3 to exit\n";
                cin>>WithAndDepo;
                    
                         switch(WithAndDepo){
                        case '1':
                        
                        Balance+=Deposit();
                      
                    break;
                        case '2':
                        
                        Balance-=Withdraw(Balance);
                    break;
                    case '3':
                    cout<<"\n";
                    break;    
                    default:
                    cout<<"\033[031m"<<"Invalid option\n"<<"\033[0m";
                    break;
                }
                    
                }while(WithAndDepo!='3');
            }
           
            else if(option=='2' ){
    if(Balance>=BetCost(Balance)){
                Balance-=BetCost(Balance);
            cout<<"Please bet the number between (1-15)"<<endl;
        do{
                    do{
                cout<<"Enter the number: ";
            cin>>choice;
                if(choice<=0 || choice>15){
                cout<<"\033[31m"<<"Invalid choice"<<"\033[0m\n";
                }
                    }while(choice<=0 || choice>15);
            Computer=ComGuess();
            srand(time(0));
            long Reward=(rand()%6+1);
            cout<<"The number is "<<Computer<<endl;
            if(choice==Computer){
                switch(Reward){
                    case 1:
                        cout<<"\033[032m"<<"You won $100"<<"\033[0m"<<endl;
                        Balance+=100;
                    break;
                    case 2:
                        cout<<"You won $200"<<endl;
                        Balance+=200;
                    break;
                    case 3:
                        cout<<"You won $300"<<endl;
                        Balance+=300;
                    break;
                    case 4:
                        cout<<"You won $400"<<endl;
                        Balance+=400;
                    break;
                    case 5:
                        cout<<"You won $500"<<endl;
                        Balance+=500;
                    break;
                    case 6:
                        cout<<"You won $600"<<endl;
                        Balance+=600;
                    break;  
                  
                
                
            }
            }      
            else{
                cout<<"You lose\n";
                }
                
                cout<<"Wanna bet again?\n";
                cin>>Ans;
                if(Ans=="Yes" || Ans=="yes" && Balance>=BetCost(Balance)){
                    Balance-=BetCost(Balance);
                    cout<<"Goodluck\n";
                }
                else if(Ans=="No" || Ans=="no"){
                    cout<<"Thanks for playing\n";
                }
                else if(Ans=="Yes" || Ans=="yes" && Balance<BetCost(Balance)){
                    cout<<"\033[31m"<<"Insufficiont Funds"<<"\033[0m";
                }
                else{
                    cout<<"Thanks\n";
                }
        }while(Ans=="Yes" || Ans=="yes" && Balance>=BetCost(Balance));
        }
        else if(Balance<BetCost(Balance)){
            cout<<"\033[031m"<<"Insufficient Funds\n"<<"\33[0m";
        }
                }
                else if(option=='3'){
                    cout<<"Goodbye";
                }
                else{
                    cout<<"\033[031m"<<"Invalid option\n"<<"\033[0m";
                }
        }while(option!='3');
        
return 0;
}

int ComGuess(){
srand(time(0));
int Computer;
Computer=(rand()%15+1);
return Computer;
}
double ShowBalance(double Balance){
    double balance=0;
    return balance;
}
double Deposit(){
    double amount;
    
    cout<<"Enter the amount you want to deposit\n";
    cin>>amount;
    
        if(amount<0){
        cout<<"Invalid amount\n";
        return 0;
    }
    else {
          cout<<"\033[032m"<<"$"<<amount<<" has been successfully deposited\n"<<"\033[0m";
    
    return amount;
    }
}
double Withdraw(double Balance){
    double amount;
    cout<<"Enter the amount you want to withdraw\n";
    cin>>amount;
    if(amount>Balance){
        cout<<"\033[031m"<<"Insufficient funds\n"<<"\033[0m";
        return 0;
    }
    else if(amount < 0){
        cout<<"\033[031m"<<"Invalid amount\n"<<"\033[0m";
        return 0;
    }
    
    else{
        cout<<"\033[032m"<<"$"<<amount<<" has been withdrawed\n"<<"\033[0m";
        return amount;
    }
}
double BetCost(double Balance){
    double amount=15;
        return amount;
}