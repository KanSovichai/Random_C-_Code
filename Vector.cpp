#include<iostream>
#include<vector>
using std::cout;
int main(){
    std::vector <int> v1={1,2,3,4};
    v1.push_back(9);
    cout<< v1.size()<<'\n';
    v1.push_back(5);
    v1.shrink_to_fit();
    for(int i=0; i<=v1.size();i++){
    cout<<v1[i]<<'\n';
    }
    return 0;
}