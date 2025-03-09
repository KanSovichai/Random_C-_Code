#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create and open a text file for writing
    ofstream MyFile("test1.txt");

    // Check if the file was successfully opened
    if (!MyFile.is_open())
    {
        cerr << "Failed to open the file for writing." << endl;
        return 1;
    }

    // Write to the file
    MyFile << "I created this text file from C++ code\n";
    MyFile << "12";
    MyFile.close();

    // Open the text file for reading
    ifstream InputFile("test1.txt");

    // Check if the file was successfully opened
    if (!InputFile.is_open())
    {
        cerr << "Failed to open the file for reading." << endl;
        return 1;
    }

    string line;
    int i;

    // Read from the file
    getline(InputFile, line); // Read the first line
    cout << line << endl;

    InputFile >> i; // Read the integer value
    cout << "The value of i is " << i << endl;

    // Close the file
    InputFile.close();

    return 0;
}