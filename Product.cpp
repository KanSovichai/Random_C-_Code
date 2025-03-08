#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::setw;
using std::string;
auto ItemInfo(string name, string id, double price);
int main()
{
    char choice;
    string name, id, search;
    double price;
A:
    cout << "============>EMPLOYEE INFORMATION<==============\n";
    cout << "1 to input item inforamtion\n";
    cout << "2 to check item information\n";
    cout << "3 to search for an  item\n";
    cout << "4 to exit\n";
    cin >> choice;
    switch (choice)
    {
    case '1':
        cout << setw(20) << "Enter product's name: ";
        cin >> name;
        cout << setw(20) << "Enter product's ID: ";
        cin >> id;
        cout << setw(20) << "Enter product's price: ";
        cin >> price;
        goto A;
        break;
    case '2':
    B:
        cout << "ID" << setw(10) << "Name" << setw(10) << "Price" << std::endl;
        cout << id << setw(10) << name << setw(10) << price << "\n";
        goto A;
        break;
    case '3':
        cout << "Product's ID: ";
        cin >> search;
        if (search == id)
        {
            goto B;
        }
        else
        {
            cout << "ERROR 404\n";
            goto A;
        }
        break;
    case '4':
        system("cls");
        cout << "Thanks for visiting\n";
        break;
    default:
        cout << "Invalid Choice\n";
        goto A;
        break;
    }
    return 0;
}