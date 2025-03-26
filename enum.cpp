#include <iostream>
using std::cin;
using std::cout;
enum Days
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};
int main()
{
    
    Days Today=sunday;
    switch (Today)
    {
    case sunday:
        cout << "Today is the first day of the week\n";
        break;
    case monday:
        cout << "Today is the second day of the week\n";
        break;
    case tuesday:
        cout << "Today is the third day of the week\n";
        break;
    case wednesday:
        cout << "Today is the fourth day of the week\n";
        break;
    case thursday:
        cout << "Today is the fifth day of the week\n";
        break;
    case friday:
        cout << "Today is the sixth day of the week\n";
        break;
    case saturday:
        cout << "Today is the seventh day of the week\n";
        break;
    }

    return 0;
}