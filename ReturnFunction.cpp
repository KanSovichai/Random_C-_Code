#include<iostream>
using std::cin;
using std::cout;
void Modify(int &a){
    a = 10;
}
int main(){
    int a = 5;
    Modify(a);
    cout<<a;
    return 0;
}