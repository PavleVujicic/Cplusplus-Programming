// Section 6
// Declaring and initializing variables
#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main() {
    
    int number_Width {0};
    cout << "Enter a number of Width:";
    cin >> number_Width;
    
    int number_Length {0};
    cout << "Enter a number of length:";
    cin >> number_Length;
    
    cout << "The total area of the room is " << number_Width * number_Length << " square feet!"<< endl;
    
    return 0;
}

