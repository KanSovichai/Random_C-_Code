#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream File("Students.txt");
    if (!File.is_open())
    {
        cout << "Error creating file\n";
        return 1;
    }
    string name;
    int score;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name: ";
        getline(cin >> ws, name);
        File << name << "\t\t\t";
        cout << "Enter score: ";
        cin >> score;
        File << score << endl;
    }
    File.close();
    cout << "File created succesfully\n";
    ifstream File1("Students.txt");
    if (!File1.is_open())
    {
        cout << "Error creating file\n";
        return 1;
    }
    string name1;
    int score1, passed = 0, failed = 0;
    float totalScore = 0;
    cout << "-----------------DATA-----------------------\n";
    cout << "Name\t\t\tScore\n";
    while (!File1.eof())
    {
        File1 >> name1;
        File1 >> score1;
        totalScore += score1;
        (score1 >= 50) ? passed++ : failed++;
        cout << name1 << "\t\t\t" << score1 << endl;
    }
    cout<<"\nPassed Percentage : "<<totalScore/5*100<<"%"<<endl;
    File1.close();

    return 0;
}