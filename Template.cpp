#include<iostream>
using namespace std;
//Intiate a template by using
//template<typename *any name>
template<typename T>
T Sum(T a, T b){
    return a+b;
}
template<typename T>
void Swap(T *e,T *f){
    T temp;
    temp=*e;
    *e=*f;
    *f=temp;
}
int main(){
    //Basically a template enable you to use the same function for different data types
    int a=10,b=20;
    cout<<Sum(a,b)<<endl;
    float c=10.5,d=20.5;
    cout<<Sum(c,d)<<endl;
    int e=1,f=2;
    Swap(&e,&f);
    cout<<e<<" "<<f<<endl;
    return 0;
}