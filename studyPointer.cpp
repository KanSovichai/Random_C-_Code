#include <iostream>
using namespace std;
int *getMax(int *a,int *b){
    return (*a > *b) ? a :b;
}
void Arr(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<"Arr["<<i<<"]="<<*(arr + i)<<endl;
    }
}
int main()
{
    int a=10,b=20;
    cout<<"The max value is :"<<*getMax(&a,&b)<<endl;
    //need to use dderefferences in front of the parameter value because its a pointer function
    //function with array
    int Array[5]={1,2,3,4,5};
    Arr(Array,5);
    return 0;
}