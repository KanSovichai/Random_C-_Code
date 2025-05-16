#include<iostream>
using namespace std;
class Time{
    private:
    int hour,minute,second;
    public:
    Time(){
        this->hour=0;
        this->minute=0; 
        this->second=0;
    }
    Time(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;    
        this->second=second;
        if(second>60){
            this->minute+=this->second/60;
            this->second=second%60;
        }
        if(minute>60){
            this->hour+=this->minute/60;
            this->hour=this->minute%60;
        }
    }
    //overloading operator
    Time operator+(Time obj){
        Time temp;
        temp.hour=this->hour+obj.hour;
        temp.minute=this->minute+obj.minute;
        temp.second=this->second+obj.second;
        if(temp.second>60){
            temp.minute+=temp.second/60;
            temp.second=temp.second%60;
        }
        if(temp.minute>60){
            temp.hour+=temp.minute/60;
            temp.hour=temp.minute%60;
        }
        return temp;
    }
    void Output(){
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
int main(){
    Time obj(12,1,300);
    obj.Output();
    Time obj1(12,1,300);
    Time result;
    result=obj+obj1;
    result.Output();
    return 0;
}