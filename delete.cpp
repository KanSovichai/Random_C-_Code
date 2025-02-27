#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int Delete, size;
    cout << "Enter the size:";
    cin >> size;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " number:";
        cin >> num[i];
    }
    cout << "Enter the number to delete:";
    cin >> Delete;
    for (int i = 0; i < size; i++)
    {
        if (Delete == num[i])
        {
            for (int j = i; j < size; j++)
            {
                num[j] = NULL;
                // use null to assign the delete number to nothing
            }
            size--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << std::endl;
    }
    return 0;
}