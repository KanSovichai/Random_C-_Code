#include<iostream>
using namespace std;
int main(){
   float score1, score2, score3,score4,score5,score6,avg;
   cout<<"Enter score 1:";cin>>score1;
   cout<<"Enter score 2:";cin>>score2;
   cout<<"Enter score 3:";cin>>score3;
   cout<<"Enter score 4:";cin>>score4;
   cout<<"Enter score 5:";cin>>score5;
   cout<<"Enter score 6:";cin>>score6;
   cout<<"The total score is: "<<score1+score2+score3+score4+score5+score6<<endl;
   avg=(score1+score2+score3+score4+score5+score6)/6;
   cout<<"The average is: "<<avg<<"%"<<endl;
   if(avg>=90 && avg<100){ system("cls");
    cout<<"Your overall grade is A"<<endl;   
   }
   else if(avg>=80 && avg<90){ system("cls");
    cout<<"Your overall grade is B"<<endl;   
   }
   else if(avg>=70 && avg<80){ system("cls");
    cout<<"Your overall grade is c"<<endl;    
   }
   else if(avg>=60 && avg<70){ system("cls");
    cout<<"Your overall grade is D"<<endl;   
   }
   else if(avg>=50 && avg<60){ system("cls");
    cout<<"Your overall grade is E"<<endl;    
   } 
   else if(avg<50){ system("cls");
    cout<<"Your overall grade is F"<<endl;    
   }
   else{ system("cls");
    cout<<"Invalid score\n";
   
   }

    return 0;
}
