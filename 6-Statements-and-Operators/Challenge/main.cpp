// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {
    
    int cents {0};
    int total {0};
    int difference {0};
    
    int dollars {0};
    int quarters {0};
    int dimes {0};
    int nickels {0};
    int pennies {0};
    
    cout << "Enter a integer amount in cents: ";
    cin >> cents;
    
    //Dollards
    if(cents >= 100){
        
        difference = cents % 100; //Example 293 mod 100 = 93
        total = (cents - difference)/100;
        cents = difference;
        dollars = total;
    }else{
        dollars = 0;
    }
    
    
    //Quarters
    if(cents >= 25){
        difference = cents % 25; //Example 93 mod 25 = 18
        total = (cents - difference)/25;
        cents =  difference;
        quarters = total;
    }else{
        quarters = 0;
    }
    
    
    //Dimes 
    if(cents >= 10){
        difference = cents % 10; //Example 18 mod 10 = 8
        total = (cents - difference)/10;
        cents =  difference;
        dimes = total;
    }else{
        dimes = 0;
    }
    
    
    //Nickels
    if(cents >= 5){
        difference = cents % 5; //Example 8 mod 5 = 3
        total = (cents - difference)/5;
        cents =  difference;
        nickels = total;
    }else{
        nickels = 0;
    }
    
    
    //Pennies
    if(cents >= 1){
        difference = cents % 1; //Example 3 mod 1 = 3
        total = (cents - difference)/1;
        cents =  difference;
        pennies = total;
    }else{
        pennies = 0;
    }
    
    cout << "You can provide change for this change as follow: " << endl;
    cout << "Dollars  : " << dollars << endl;
    cout << "Quarters : " << quarters << endl;
    cout << "Dimes    : " << dimes << endl;
    cout << "Nickels  : " << nickels << endl;
    cout << "Pennies  : " << pennies << endl;

    cout << endl;
    return 0;
}


