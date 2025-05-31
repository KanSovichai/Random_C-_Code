#include <iostream>
using std::cin;
using std::cout;
using std::string;
bool NameEm(string *name);
bool IdEm(string *Id);
bool CheckMax(string *name, string *Id);
int main()
{
    char Options, op;
    string name[10] = {"000", "000", "000", "000", "000", "000", "000", "000", "000", "000"};
    string Id[10] = {"000", "000", "000", "000", "000", "000", "000", "000", "000", "000"};
a:
    string Name, id;
    cout << "--------INFORMATION---------\n";
    cout << "1 to insert employee's information" << std::endl;
    cout << "2 to check employee's information" << std::endl;
    cout << "3 to exit\n";
    cin >> Options;
    switch (Options)
    {
    case '1':
        cout << "Enter Employee's Name:";
        cin >> Name;
        cout << "Enter Employee's ID:";
        cin >> id;
        if (NameEm(name))
        {
            for (int i = 0; i <= 10; i++)
            {
                if (CheckMax(name, Id))
                {
                    cout << "Full Slot\n";
                    break;
                }
                if (name[i] == "000")
                {
                    name[i] = Name;
                    break;
                }
            }
        }
        break;
    case '2':
        system("cls");
        for (int i = 0; i < 10; i++)
        {
            if (name[0] == "000")
            {
                cout << "No Data\n";
                break;
            }
            else if (name[i] == "000")
            {
                break;
            }
            cout << name[i] << std::endl;
        }
        for (int i = 0; i < 10; i++)
        {
            if (Id[0] == "000")
            {
                cout << "No Data" << std::endl;
                break;
            }
            else if (Id[i] == "000")
            {
                break;
            }
            cout << Id[i] << std::endl;
        }
        break;
    case '3':
        exit(0);
    default:
        system("cls");
        cout << "ERROR input 404\n";

        break;
    }
    goto a;

    return 0;
}
bool NameEm(string *name)
{
    for (int i = 0; i < 10; i++)
    {
        if (name[i] == "000")
        {
            return true;
            break;
        }
    }
    return false;
}
bool IdEm(string *Id)
{
    for (int i = 0; i < 10; i++)
    {
        if (Id[i] == "000")
        {
            return true;
            break;
        }
    }
    return false;
}
bool CheckMax(string *name, string *Id)
{
    if (name[9] == "000")
    {
        return false;
    }
    else
    {
        return true;
    }
}