#include<iostream>
using namespace std;
int main (){
//Logic OR 
    cout<<"1>0 || 2>0  "<<(1>0 || 2>0)<<endl;
    cout<<"2<1 || 2<0  "<<(2<1 || 2<0)<<endl;
    cout<<"2>1 || 2<1  "<<(2>1 || 2<1)<<endl;
    
    
    cout<<"Logic Or";
    cout<<"-------------------\n";
	cout<<"|  P   | Q   | P^Q|\n";
	cout<<"-------------------\n";
	cout<<"|  1   | 1   |   1|\n";
	cout<<"-------------------\n";
	cout<<"|  0   | 1   |   1|\n";
	cout<<"-------------------\n";
	cout<<"|  1   | 0   |   1|\n";
	cout<<"-------------------\n";
	cout<<"|  0   | 0   |   0|\n";
	cout<<"-------------------\n";
	
	return 0;
}
