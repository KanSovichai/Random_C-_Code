#include <iostream>
using std::cin;
using std::cout;
int main()
{
    for(int i =0; i<=10;i++){
        for(int j=10; j>=i;j--){
            cout<<" ";
        }
        for(int k=0; k<=i;k++){
            cout<<"* ";
        }
        cout<<'\n';
    }
    for(int l=0;l<=5;l++){
        for(int p=10;p>=0;p--){
        cout<<" ";}
        cout<<"*";
        cout<<"\n";
    }
    for(int i =1; i<=10;i++){
        for(int j=0;j<=i ;j++){
            cout<<" ";
        }
        for(int k=i; k<=10;k++){
            cout<<"* ";
        }
        cout<<'\n';
    }
    return 0;
}