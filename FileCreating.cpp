#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //create an object
    fstream File;
    string  text;//create a variable to store what the user input
    File.open("Test.txt",ios::out);//open the file and give it a name and mode
    //the ios::out mode is used to write out to the file that created
    if(!File){
        cout<<"Error creating file\n";//if the file is not open we output an error
        return 0;
    }
    cout<<"File created succesfully\n";//if there's no error then output a successfully created message
    cout<<"Input text:\n";
    getline(cin,text);//input the text to the variable
    File<<text;//We output the text in the file
    File.close();//close the file
    return 0;
}