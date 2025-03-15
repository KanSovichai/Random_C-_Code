#include<iostream>
#include<unistd.h>
using std::cout;
using std::cin;
int main(){
    //Not working idk why either
    char Start,Stop;
    cout<<"Enter to start or stop";
    cin>>Start;
    if(Start.empty()){
        for(int i=0; Stop.empty(); i++){
            for(int j=0; Stop.empty() && j<=60;j++){
                for(int k=0 ; !Stop.empty.() && k<=60;k++){
                    cout<<i<<":"<<j<<":"<<k;
                    cin>>Stop;
                    usleep(1000000);
                }
            }
        }
    }
    return 0;
}