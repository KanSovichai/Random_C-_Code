#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int arr[3];
    bool check = true;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the value of arr[" << i << "] : ";
        cin >> arr[i];
    }
    // search
    int search;
    cout << "Enter the value to search : ";
    cin >> search;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == search)
        {   
            cout << "Search found at index " << i << "\n";
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "Search not found error 404\n";
    }
    return 0;
}