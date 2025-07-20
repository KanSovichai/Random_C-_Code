#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int writeDataToFile(string name[], int score[])
{
    ofstream File("Student.txt");
    if (!File.is_open())
    {
        cout << "Error creating file\n";
        return 1;
    }
    for (int i = 0; i < 5; i++)
    {
        File << left << setw(25) << name[i] << "\t\t\t" << setw(5) << score[i] << endl;
    }
    File.close();
    return 0;
}
int readDataFromFile()
{
    int passed = 0, failed = 0;
    float totalScore = 0;
    ifstream File("Student.txt");
    if (!File.is_open())
    {
        cout << "Error creating file\n";
        return 1;
    }
    string name;
    int score;
    while (!File.eof())
    {
        getline(File, name, '\t');
        File >> score;
        if (File.good())
        {
            totalScore += score;
            (score >= 50) ? passed++ : failed++;
            cout << setw(25) << name << "\t\t\t" << setw(5) << score << endl;
        }
    }
    cout << "\nPassed : " << passed << "\nFailed : " << failed << endl;
    cout << "\nPassed Percentage : " << (passed /(float) 5) * 100 << "%" << endl;
    return 0;
}
int main()
{
    string Name[5];
    int score[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name: ";
        getline(cin >> ws, Name[i]);
        cout << "Enter score: ";
        cin >> score[i];
    }
    writeDataToFile(Name, score);
    readDataFromFile();

    return 0;
}