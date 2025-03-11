#include <iostream>
using namespace std;
int main()
{
    // string function
    char Hello[] = "Hello";
    Hello[3] = 'K';
    cout << Hello << endl;
    string Line = "Hello world";
    // the string replace is used to replace the index 6th and 5 letter to the right with a "C++"
    Line.replace(6, 5, "C++");
    cout << Line << endl;
    string Line2 = " How are you?";
    // the string + is use to connect 2 string together
    Line += Line2;
    cout << Line << endl;
    // the string.length() is use to find the length og the string
    cout << Line.length() << endl;
    // the string length size and capacity show the size of the string
    cout << Line.size() << endl;
    cout << Line.capacity() << endl;
    cout << (Line.empty() ? "Yes" : "No") << endl;
    //string append function is used to add a string to the back of another string
    //string insert is used to insert a string into a specific place and push all the other thing to the right
    Line.insert(5," Chai");
    cout<<Line<<endl;
    //string erase is used to erase the specific string
    Line.erase(5,5);
    cout<<Line<<endl;
    return 0;
}