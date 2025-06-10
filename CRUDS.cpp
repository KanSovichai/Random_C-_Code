#include <iostream>
#include <unistd.h>
#include <iomanip>
using std::cin;
using std::cout;
using std::setw;
using std::string;
using std::ws;
void Name(string *NameEm);
void Id(string *IdEm);
void Update(string *IdEm, string *NameEm, bool Found, bool Same_Name);
void Delete(string *IdEm, string *NameEm, bool Found);
void Information(string *NameEm, string *IdEm);
bool Search(string *NameEm, string *IdEm);
int main()
{
    string NameEm[100], IdEm[100];
    char Options;

a:
    bool Found = false, Same_Name = false;
    cout << "--------INFORMATION---------\n";
    cout << "1 to input employee's information" << std::endl;
    cout << "2 to check employee's information" << std::endl;
    cout << "3 to update employee's information" << std::endl;
    cout << "4 to delete employee's information" << std::endl;
    cout << "5 to search for employee" << std::endl;
    cout << "6 to exit\n";
    cin >> Options;
    switch (Options)
    {
    case '1':
        Name(NameEm);
        Id(IdEm);
        break;
    case '2':
        Information(NameEm, IdEm);
        break;
    case '3':
        Update(IdEm, NameEm, Found, Same_Name);
        break;
    case '4':
        Delete(IdEm, NameEm, Found);
        break;
    case '5':
        if (Search(NameEm, IdEm))
        {
            cout << "\033[032m" << "Search Found\n"
                 << "\033[0m";
        }
        else
        {
            cout << "\033[031m" << "Search Fail\t" << "\033[0m";
            cout << "\033[031m" << "ERROR 404" << "\033[0m" << std::endl;
        }
        break;
    case '6':
        exit(0);
    }
    goto a;
    return 0;
}
void Name(string *NameEm)
{
    string n;
    cout << "Enter the name of the employee: ";
    getline(cin >> ws, n);
    for (int I = 0; I < 100; I++)
    {
        if (NameEm[I].empty())
        {
            NameEm[I] = n;
            break;
        }
    }
}
void Id(string *IdEm)
{
    string id;
    cout << "Enter the ID of the employee: ";
    getline(cin >> ws, id);
    for (int i = 0; i < 100; i++)
    {
        if (IdEm[i].empty())
        {
            IdEm[i] = id;
            break;
        }
    }
}
void Update(string *IdEm, string *NameEm, bool Found, bool Same_Name)
{
    string Update;
    string New_Name, New_Id;
    cout << "Enter the ID of the employee: ";
    cin >> Update;
    for (int i = 0; i < 100; i++)
    {
        if (IdEm[i] == Update)
        {
            cout << "Enter the new name of the employee : ";
            getline(cin >> ws, New_Name);
            if (New_Name == NameEm[i])
            {
                Found = false;
                Same_Name = true;
                break;
            }
            cout << "Enter the new ID of the employee : ";
            cin >> New_Id;
            NameEm[i] = New_Name;
            IdEm[i] = New_Id;
            Found = true;
            break;
        }
        else if (IdEm[i] != Update)
        {
            Found = false;
        }
    }
    if (Found == true)
    {
        system("cls");
        cout << "\033[032m" << "Update successfully\n"
             << "\033[0m";
    }
    else if (Found == false && Same_Name == true)
    {
        system("cls");
        cout << "The new name cannot be the same as the old one" << std::endl;
        cout << "\033[031m" << "Update fail\n"
             << "\033[0m";
    }
    else if (Found == false && Same_Name == false)
    {
        system("cls");
        cout << "\033[031m" << "Update fail ERROR 404\n"
             << "\033[0m";
    }
}
void Delete(string *IdEm, string *NameEm, bool Found)
{
    string Del_Id, Ans;
    cout << "Enter the ID of the employee to delete the information: ";
    cin >> Del_Id;
    for (int i = 0; i < 100; i++)
    {

        if (Del_Id == IdEm[i])
        {
            cout << "\033[031m" << "Are you sure ? (This action cannot be undone)" << "\033[0m" << std::endl;
            cin >> Ans;
            if (Ans == "Yes" || Ans == "yes" || Ans == "y" || Ans == "Y")
            {
                IdEm[i] = "000";
                NameEm[i] = "000";
                Found = true;
            }
            else if (Ans == "No" || Ans == "no" || Ans == "n" || Ans == "N")
            {
                cout << "\033[031m" << "Delete fail\n"
                     << "\033[0m";
                break;
            }
            else
            {
                cout << "\033[031m" << "Invalid input\n"
                     << "\033[0m";
                break;
            }
            break;
        }
        else if (IdEm[i] != Del_Id)
        {
            Found = false;
        }
    }
    (Found == true) ? cout << "\033[032m" << "Update successfully\n"
                           << "\033[0m"
                    : cout << "\033[031m" << "Update fail ERROR 404\n"
                           << "\033[0m";
}
bool Search(string *NameEm, string *IdEm)
{
    string Search;
    cout << "Enter the ID of the employee to search for: ";
    cin >> Search;
    for (int i = 0; i < 100; i++)
    {
        if (IdEm[i] == Search)
        {
            cout << "***********Employee's Information************\n";
            cout << setw(5) << NameEm[i] << "  ";
            cout << setw(20) << IdEm[i] << "  " << std::endl;
            return true;
            break;
        }
    }
    return false;
}
void Information(string *NameEm, string *IdEm)
{
    bool Empty = false;
    system("cls");
    cout << "***********Employee's Information************\n";
    for (int i = 0; i < 100; i++)
    {
        Empty = (NameEm[i].empty()) ? true : false;
        if (NameEm[i] == "000")
        {
            cout << setw(5) << "NO DATA\n";
            break;
        }
        else if (Empty)
        {
            cout << setw(5) << "NO DATA\n";
            break;
        }
        cout << setw(5) << NameEm[i];
        cout << setw(20) << IdEm[i] << std::endl;
    }
    cout << std::endl;
}