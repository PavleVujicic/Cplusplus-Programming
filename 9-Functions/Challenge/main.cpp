// Section 11
// Challenge 
/*
     Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.
    
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
    
    Finally,  don't forget to use function prototypes!
    
    Good luck -- I know you can do it!
*/
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>
#include <cctype> // used for toupper

using namespace std;

// Prototypes for displaying the menu getting user selection
void displayMenu();
void readSelection(char&);

// Menu handling function prototypes
void printNumbers(vector<int> &vec, char);
void addSelectiontoList(vector<int> &vec);
void meanCalculator(vector<int> &vec, char);
void smallestNum(vector<int> &vec, char);
void largestNum(vector<int> &vec, char);
void quitting();
void unknownSelect();

// Prototypes for functions that work with the list
// to display it, calculate mean, etc.
void findifEmpty(char&);
void printNumbersOutput(vector<int> &vec);
void meanCalculations(vector<int> &vec);
void findSmallestNum(vector<int> &vec);
void findLargestNum(vector<int> &vec);

int main() {
    
    char selection {};
    vector<int> vec {};
    
    do{
        displayMenu();
        cin >> selection;
        readSelection(selection);
        
        if(selection == 'P'){
            printNumbers(vec, selection);
            
        }else if(selection == 'A'){
            addSelectiontoList(vec);
            
        }else if(selection == 'M'){
            meanCalculator(vec, selection);
            
        }else if(selection == 'S'){
            smallestNum(vec, selection);
            
        }else if(selection == 'L'){
            largestNum(vec, selection);
            
        }else if(selection == 'Q'){
            quitting();
        }else{
            unknownSelect();
        }
    }while(selection != 'Q');
    
    cout << endl;
    return 0;
}

/***************************************************************
This function displays the menu to the console.
***************************************************************/
void displayMenu(){
    cout << "\n";
        cout << "+---------------------------------+" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
}

/***************************************************************
This function simply reads a character selection and turns it as upper case.
***************************************************************/
void readSelection(char &selection){
    if(isalpha(selection)){
       if(islower(selection)){
            selection = toupper(selection);
        } 
    }
    cout << "\nYou have selected: " << selection << endl;
}

/***************************************************************
This function is called when the user selects the display list
option from the main menu.
***************************************************************/
void printNumbers(vector<int> &vec, char selection){
    if(vec.empty()){
        findifEmpty(selection);
    }else{
        printNumbersOutput(vec);
    }
}

/***************************************************************
This function is called when the user selects add a number
to the list from the main menu
***************************************************************/
void addSelectiontoList(vector<int> &vec){
    int add_selection {};
    cout << "\nEnter an Integer to add to the list: ";
    cin >> add_selection;
    
    vec.push_back(add_selection);
    cout << endl;
    cout << add_selection << " added!" << endl;
}

/***************************************************************
This function is called when the user selects calculate the mean
from the main menu
***************************************************************/
void meanCalculator(vector<int> &vec, char selection){
    
    if(vec.empty()){
        findifEmpty(selection);
    }else{
        meanCalculations(vec);
    }
}

/***************************************************************
This function is called when the user selects the smallest 
option from the main menu
***************************************************************/
void smallestNum(vector<int> &vec, char selection){
    if(vec.empty()){
        findifEmpty(selection);
    }else{
        findSmallestNum(vec);
    }
}

/***************************************************************
This function is called when the user selects the largest 
option from the main menu
***************************************************************/
void largestNum(vector<int> &vec, char selection){
    if(vec.empty()){
        findifEmpty(selection);
    }else{
        findLargestNum(vec);
    }
}

/***************************************************************
This function is called when the user selects the quit 
option from the main menu
***************************************************************/
void quitting(){
    cout << "\nGoodbye......" << endl;
}

/***************************************************************
This function is called whenever the user enters a selection
and we don't know how to handle it.
It is not one of the valid options in the main menu
***************************************************************/
void unknownSelect(){
    cout << "\nUnknown selection, please try again" << endl;
}

/***************************************************************
This function is called when a list is empty and expects a character 
selection to display the output message
***************************************************************/
void findifEmpty(char &selection){
    if(selection == 'P'){
        cout << "\n[] - the list is empty" << endl;
    }else if(selection == 'M'){
        cout << "\nUnable to calculate the mean - no data" << endl;
    }else if(selection == 'S'){
        cout << "\nUnable to determine the smallest number - list is empty" << endl;
    }else{
        cout << "\nUnable to determine the largest number - list is empty" << endl;
    }
}

/***************************************************************
This function expects a list of integers as a vector
and displays all the integers in the list in square brackets
***************************************************************/
void printNumbersOutput(vector<int> &vec){
    cout << endl;
    cout << "[ ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec.at(i);
        cout << " ";
    }
    cout << "]" << endl;
}

/***************************************************************
This function expects a list of integers as a vector
and outputs the calculated mean
***************************************************************/
void meanCalculations(vector<int> &vec){
    int result {0};
    double mean {0};
    
    for(int i = 0; i < vec.size(); i++){
        result = result + vec.at(i);
    }
    mean = static_cast<double>(result) / vec.size();
    cout << "\nThe mean is: " << mean << endl;
}

/***************************************************************
This function expects a list of integers as a vector
and outputs the smallest integer in the list
***************************************************************/
void findSmallestNum(vector<int> &vec){
    int temp {vec.at(0)};
    for(int i = 1; i < vec.size(); i++){
        if(vec.at(i) < temp){
            temp = vec.at(i);
        }
    }
    cout << "\nThe smallest number is: " << temp << endl;
}

/***************************************************************
This function expects a list of integers as a vector
and outputs the largest integer in the list
***************************************************************/
void findLargestNum(vector<int> &vec){
    int temp {vec.at(0)};
    for(int i = 1; i < vec.size(); i++){
        if(vec.at(i) > temp){
            temp = vec.at(i);
        }
    }
    cout << "\nThe largest number is: " << temp << endl;
}