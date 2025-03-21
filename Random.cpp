#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	//random Number and Event
	srand(time(0));
	cout<<"Random number from 2 dices\n";
	cout<<"The first dice: "<< rand()%6+1<<endl;
	cout<<"The second dice: " <<rand()%6+1<<endl;
	
	//random Events
	int Event= rand()%5+1;
	string Ans;
	
	
	do{
	cout<<"Want to try your luck to win a random reward?\n";
	cin>>Ans;
	
	if(Ans=="Yes"|| Ans=="yes"){
	
	switch(Event){
	
	case 1:;
	        cout<<"You won a teddy bear\n";
	        break;
	case 2:;
	        cout<<"You won a VGA\n";
			break;
	case 3:;
			cout<<"You won a RC car\n";
			break;
	case 4:;
			cout<<"You won a Car\n";
			break;
	case 5:;
			cout<<"You won nothing sorry\n";
			break;						        
                 }
	
        }
      else if(Ans=="No" || Ans=="no"){
	    cout<<"Just try it cuz you might win something\n";
       }
       else{
       	cout<<"Its a yes or no question dude\n";
	   }
    }while(Ans=="No" || Ans=="no");
    
	return 0;
}
