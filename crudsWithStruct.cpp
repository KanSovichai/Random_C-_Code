#include <iostream>
using namespace std;

struct Information
{
    string Name, Id, gender;
    float salary;
};

void InformationInput(Information &Info)
{
    cout << "Enter the name of the employee: ";
    getline(cin >> ws, Info.Name);
    cout << "Enter the ID of the employee: ";
    getline(cin >> ws, Info.Id);
    cout << "Enter the gender of the employee: ";
    getline(cin >> ws, Info.gender);
    cout << "Enter the salary of the employee: ";
    cin >> Info.salary;
}

void InformationOutput(const Information &Info)
{
    cout << Info.Name << " " << Info.Id << " " << Info.gender << " " << Info.salary << endl;
}

int main()
{
    char Op;
    Information Info[100];
    int Size = 0;
    do
    {
        cout << "--------INFORMATION---------\n";
        cout << "1 to input employee's information" << endl;
        cout << "2 to check employee's information" << endl;
        cout << "3 to search employee's information" << endl;
        cout << "4 to delete employee's information" << endl;
        cout << "5 to update for employee" << endl;
        cout << "6 to sort the employee's ID" << endl;
        cout << "7 to exit\n";
        cin >> Op;
        switch (Op)
        {
        case '1':
        {
            cout << "How many employees do you want to input?\n";
            cin >> Size;
            for (int i = 0; i < sizeof(Info) / sizeof(Info[0]); i++)
            {
                if (Info[i].Name.empty())
                {
                    for (int j = 0; j < Size; j++)
                    {
                        InformationInput(Info[i]);
                        cout << endl;
                        i++;
                    }
                    break;
                }
            }
            system("cls");
        }
        break;
        case '2':
            for (int i = 0; i < sizeof(Info) / sizeof(Info[0]); i++)
            {
                if (!Info[i].Name.empty())
                {
                    InformationOutput(Info[i]);
                    cout << endl;
                }
            }
            break;
        case '3':
        {
            string id;
            cout << "Enter the ID of the employee to search for: ";
            cin >> id;
            for (int i = 0; i < sizeof(Info) / sizeof(Info[0]); i++)
            {
                if (Info[i].Id == id)
                {
                    InformationOutput(Info[i]);
                    cout << endl;
                    break;
                }
            }
        }
        break;
        case '4':
        {
            string id, Ans;
            cout << "Enter the ID of the employee to delete: ";
            cin >> id;
            for (int i = 0; i < sizeof(Info) / sizeof(Info[0]); i++)
            {
                if (Info[i].Id == id)
                {
                    cout << "Are you sure ?(y or n) (This action cannot be undone)" << endl;
                    cin >> Ans;
                    if (Ans == "y" || Ans == "Y")
                    {
                        for (int j = i; j < sizeof(Info)/sizeof(Info[0]) - 1; j++)
                        {
                            Info[j] = Info[j + 1];
                        }
                        // Clear the last element
                        Info[sizeof(Info)/sizeof(Info[0]) - 1] = Information();
                        cout << "Delete success\n";
                        break;
                    }
                    else if (Ans == "n" || Ans == "N")
                    {
                        cout << "Delete fail\n";
                        break;
                    }
                }
            }
        }
        break;
        }
    } while (Op != '7');

    return 0;
}