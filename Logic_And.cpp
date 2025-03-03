#include<iostream>
using namespace std;

int main(){
	//comparation
	cout<<"1=1?"<<(1==1)<<endl;
	cout<<"2>=1"<<(2>=1)<<endl;
	cout<<"5<2 && 5<3   "<<(5<2 && 5<3)<<endl;
	cout<<"5>9 || 5>8   "<<(5>9 || 5>8)<<endl;
	cout<<"!(5>20)      "<<!(5>20)<<"\n";
	cout<<"Logic and(&)\n";
	cout<<"-------------------\n";
	cout<<"|  P   | Q   | P^Q|\n";
	cout<<"-------------------\n";
	cout<<"|  1   | 1   |   1|\n";
	cout<<"-------------------\n";
	cout<<"|  0   | 1   |   0|\n";
	cout<<"-------------------\n";
	cout<<"|  1   | 0   |   0|\n";
	cout<<"-------------------\n";
	cout<<"|  0   | 0   |   0|\n";
	cout<<"-------------------\n";
	
	
	return 0;
}
