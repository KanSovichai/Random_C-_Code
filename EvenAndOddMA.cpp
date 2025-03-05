#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *EvenArr, *OddArr, *Arr;
    int size, Even = 0, Odd = 0;
    cout << "Input the size:";
    cin >> size;
    Arr = (int *)calloc(size, sizeof(int));
    EvenArr = (int *)calloc(size, sizeof(int));
    OddArr = (int *)calloc(size, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        cout << "enter the value for Arr[" << i << "]:";
        cin >> Arr[i];
        if (Arr[i] % 2 == 0)
        {
            EvenArr[Even++] = Arr[i];
        }
        else
        {
            OddArr[Odd++] = Arr[i];
        }
    }
    for (int i = 0; i < Even; i++)
    {
        cout << "EvenArr[" << i << "]:" << EvenArr[i] << endl;
    }
    for (int i = 0; i < Odd; i++)
    {
        cout << "OddArr[" << i << "]:" << OddArr[i] << endl;
    }
    free(Arr);
    free(EvenArr);
    free(OddArr);
    return 0;
}