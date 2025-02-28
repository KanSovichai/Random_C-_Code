#include <iostream>
using namespace std;
int main()
{
    int NU, OU;
    double total, payment;
    cout << "Enter the last month usage: ";
    cin >> OU;
    cout << "Enter the new month usage: ";
    cin >> NU;
    total = NU - OU;
    (total > 0 && total <= 10)    ? payment = 10 * 350
    : (total > 10 && total <= 20) ? payment = 10 * 350 + (total - 10) * 450
    : (total > 20 && total <= 30) ? payment = 10 * 350 + 10 * 450 + (total - 20) * 550
    : (total > 30 && total <= 40) ? payment = 10 * 350 + 10 * 450 + 10 * 550 + (total - 30) * 650
    : (total > 40 && total <= 50) ? payment = 10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + (total - 40) * 750
    : (total > 50 && total <= 60) ? payment = 10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + 10 * 750 + (total - 50) * 850
    : (total > 60)                ? payment = 10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + 10 * 750 + 10 * 850 + (total - 60)                *950
                                  : payment = 10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + 10 * 750 + 10 * 850 + (total - 60) * 1050;
    cout << "The cost in riel is :" << payment << "riel\n";
    cout << "The cost in dollar is: " << payment / 4100 << "$\n";
    return 0;
}