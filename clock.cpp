#include <iostream>
#include <unistd.h>
using std::cin;
using std::cout;
int main()
{
    int HH = 0, MM = 0, SS = 0;
    bool check;
    cout << "Enter the Hour Minute and Second\n";
    cin >> HH;
    cin >> MM;
    cin >> SS;
    system("cls");
a:
    for (int i = HH; i <= 24; i++)
    {
        for (int j = MM; j <= 59; j++)
        {
            for (int k = SS; k <= 59; k++)
            {
                cout << i << ":" << j << ":" << k;
                if (HH >= 12)
                {
                    cout << "  :PM";
                }
                else if (HH <= 11)
                {
                    cout << "  :AM";
                }
                usleep(1000000);
                system("cls");
                SS = 0;
            }
            MM = 0;
        }
    }
    HH = 0;
    goto a;
    return 0;
}
