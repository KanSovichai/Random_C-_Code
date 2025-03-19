#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char PlayerChoice();
char ComputerChoice();
void ShowWinner(char Player, char Computer);

int main(){
    char Player;
    char Computer;
    string Ans;
do{
            cout<<"Rock Paper Scissors Game\n";
        Player=PlayerChoice();
            cout<<"Your choice is ";
        switch(Player){
    case 'R':
            cout<<"Rock";
            break;
    case 'P':
            cout<<"Paper";
            break;
    case 'S':
            cout<<"Scissors";
            break;
        }  
        Computer=ComputerChoice();
          cout<<"\nComputer choice is ";
          switch(Computer){
            case 1:
            cout<<"Rock";
            break;
            case 2:
            cout<<"Paper";
            break;
            case 3:
            cout<<"Scissors";
            break;

          }
          ShowWinner(Player,Computer);
        cout<<"\nwanna play again?\n";
        
        cin>>Ans;
}while(Ans=="yes" );
if(Ans=="No" || Ans=="no" || Ans=="Nope" || Ans=="nope"){        
           cout<<"Thanks for playing ";
}
else{
    cout<<"wth is that response?";
    }
    return 0;
}
char PlayerChoice(){
    char Choice;
    do{
    cout<<"Please choose one of the following\n";
    cout<<"R = Rock\n";
    cout<<"P = Paper\n";
    cout<<"S = Scissors\n";
    cin>>Choice;
    }while(Choice!='R' && Choice!='P' && Choice!='S');
    return Choice;
}
char ComputerChoice(){
    char ComChoice;
    srand(time(0));   
    ComChoice=rand()%3+1;
    return ComChoice;
}
void ShowWinner(char Player,char Computer){
    switch(Player){
        case 'R':
        if(Computer==1){
            cout<<"\nDraw";
        }
        else if(Computer==2){
            cout<<"\nYou lose";
        }
        else if(Computer==3){
            cout<<"\nYou win";
        }
        break;
        case 'P':
        if(Computer==1){
            cout<<"\nYou win";
        }
        else if(Computer==2){
            cout<<"\nDraw";
        }
        else if(Computer==3){
            cout<<"\nYou lose";
        }
        break;
        case 'S':
        if(Computer==1){
            cout<<"\nYou lose";
        }
        else if(Computer==2){
            cout<<"\nYou win";
        }
        else if(Computer==3){
            cout<<"\nDraw";
        }
        break;
    }
}