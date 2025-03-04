#include<iostream>
using namespace std;
int divisions(const int& n, const int& divisor) {
  int ans=n, count=0;
  if(divisor==1){
    return n;
  }
  while (ans/divisor>0){
    ans=ans/divisor;
    count++;
  }
  return count;
}
int main(){
    int n,divisor;
    cout<<"INPUT n:";
    cin>>n;
    cout<<"INPUT divisor:";
    cin>>divisor;
    cout<<divisions(n,divisor);
    return 0;
}