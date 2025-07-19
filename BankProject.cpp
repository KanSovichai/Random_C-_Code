#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
void writeDataToFile(string name, float balance)
{
    ofstream file("Account.txt", std::ios::app); // Append mode
    if (!file.is_open())
    {
        cout << "Cannot open file" << endl;
    }
    file << name << "\t\t\t" << balance << endl;
    file.close();
}
void readDataFromFile()
{
    ifstream file("Account.txt");
    if (!file.is_open())
    {
        cout << "Cannot open file" << endl;
    }
    string nameUser;
    float userBalance;
    while (!file.eof())
    {
        file >> nameUser;
        file >> userBalance;
        if (file.good())
        {
            cout << "username: " << nameUser << endl;
            cout << "Balance: " << userBalance << endl;
        }
    }
    file.close();
}
void createAccount(string &name, float &balance)
{
    cout << "Enter a username(No spaces): ";
    cin >> name;
    float Balance = balance;
    writeDataToFile(name, Balance);
}
int main()
{
    char option;
    do
    {
        cout << "1.Create a new account" << endl;
        cout << "2.View account balance" << endl;
        cout << "3.Deposit money" << endl;
        cout << "4.Withdraw money" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter your option: ";
        cin >> option;
        switch (option)
        {
        case '1':
        {
            string name;
            float balance = 0;
            createAccount(name, balance);
            break;
        }
        case '2':
        {
            readDataFromFile();
            break;
        }
        case '3':
        {
            float depositAmount;
            cout << "Enter the amount you want to deposit: ";
            cin >> depositAmount;
            
        }
        }
    } while (option != '5');

    return 0;
}