
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, Welcome to Frank's Carpet Cleaning Service";
    
    cout << "\nHow many small rooms would you like cleaned? ";
    int small_Rooms {0};
    cin >> small_Rooms;
    
    cout << "\nHow many big rooms would you like cleaned? ";
    int big_Rooms {0};
    cin >> big_Rooms;
    
    const double price_smallRoom {25.0};
    const double price_bigRoom {35.0};
    const double fixed_Tax {0.06};
    const int valid_Estimate {30};
    
    cout << "\nEstimate for Carpet Cleaning Service:" << endl;
    
    cout << "Number of small rooms: " << small_Rooms << endl;
    cout << "Number of big rooms: " << big_Rooms << endl;
    
    cout << "Price per small room: $" << price_smallRoom << endl;
    cout << "Price per big room: $" << price_bigRoom << endl;
    
    cout << "Cost: $" 
            << (small_Rooms * price_smallRoom) + 
            (big_Rooms * price_bigRoom) 
            << endl;
            
    cout << "Tax: $" 
            << ((small_Rooms * price_smallRoom) + 
            (big_Rooms * price_bigRoom)) * fixed_Tax 
            << endl;
            
    cout << "==============================================="<< endl;
    
    cout << "Total Estimate: $"
            << (((small_Rooms * price_smallRoom) + (big_Rooms * price_bigRoom)) * fixed_Tax) + 
            ((small_Rooms * price_smallRoom) + (big_Rooms * price_bigRoom)) 
            << endl;
            
    cout << "This Estimate is valid for " << valid_Estimate << " days";
 
    cout << endl;
    return 0;
}

