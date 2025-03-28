#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	//do while loop
	int age;
	
	do{
	
	cout<<"Please type in your age: \n";
	cin>>age;
	      if(age<18){
	          cout<<"You are too young to enter the site\n";
                    }
          	else if(age>=99){
          		cout<<"You're not that old XD\n";
			  }
			  
			  
		         
	              
	}while(age < 18 || age>=99);
	
	cout<<"Hello and welcome to the site\n";
	
	
	// for loop
	int z;
	int H;
	int J;
	int B; 
	cout<<"What's the starting number?\n";
	cin>>H;
	cout<<"What's the ending number?\n";
	cin>>J;
	cout<<"What's the value of the gap?\n";
	cin>>B;
	for(z=H; z<=J; z+=B){
		cout<<z<<"\t";
	}
    cout<<"\n";
    //Nested loop
    char sym;
    int col;
    int x;
    cout<<"How many row?\n";
    cin>>x;
    cout<<"How many column?\n";
    cin>>col;
    cout<<"What is the symbol?\n";
    cin>>sym;
    for(int i=1 ; i<=x ; i++){
	
	     for(int k=1;k<=col;k++){
    	 cout<<sym;
    	
	                }
	    cout<<"\n";
	}
	
	//Dice game
	string Ans;
	
	
	
	cout<<"Wanna spin 4 dices?\n";
	cin>>Ans;
	
	
	if(Ans=="Yes" || Ans=="yes"){
	srand(time(0));
	
	int Dice1=(rand()%6+1);
	int Dice2=(rand()%6+1);
	int Dice3=(rand()%6+1);
	int Dice4=(rand()%6+1);
    cout<<Dice1<<endl;
    cout<<Dice2<<endl;
    cout<<Dice3<<endl;
    cout<<Dice4<<endl;
    
	}
	else if(Ans=="No" || Ans=="no"){
	cout<<"Damn you could've just try it\n";
                                   }
	
	
	else{
		cout<<"Its a yes or no question dude\n";
		
	}	
	
	
    
return 0;}
