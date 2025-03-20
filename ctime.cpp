#include <iostream>
#include <ctime>  // Import the ctime library
using namespace std;

int main() {
    // Get the timestamp for the current date and time
    time_t currentTime;
    time(&currentTime);

    // Display the date and time represented by the timestamp
    cout << ctime(&currentTime);
    return 0;
}