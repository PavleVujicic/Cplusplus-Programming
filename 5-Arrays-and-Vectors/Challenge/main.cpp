/*  Section 7
    Challenge
    
    Write a C++ program as follows:
    
    Declare 2 empty vectors of integers named
    vector1 and vector 2, respectively.
    
    Add 10 and 20 to vector1 dynamically using push_back
    Display the elements in vector1 using the at() method as well as its size using the size() method
    
    Add 100 and 200 to vector2 dynamically using push_back
    Display the elements in vector2 using the at() method as well as its size using the size() method

    Declare an empty 2D vector called vector_2d
    Remember, that a 2D vector is a vector of vector<int>
    
    Add vector1 to vector_2d dynamically using push_back
    Add vector2 to vector_2d dynamically using push_back
    
    Display the elements in vector_2d using the at() method
    
    Change vector1.at(0) to 1000
    
    Display the elements in vector_2d again using the at() method
    
    Display the elements in vector1 
    
    What did you expect? Did you get what you expected? What do you think happended?
*/
    
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> vector1; //Empty Vector
    vector <int> vector2; //Empty Vector
    
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "\nUpdated Elements for vector1: " << endl;
    
    cout << vector1[0] << endl;
    cout << vector1[1] << endl;
    
    cout << "\nElements using the Vector syntax: " << endl;
    
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    
    cout << "\nThere are " << vector1.size() << " Elements in vector1" << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "\nUpdated Elements for vector2: " << endl;
    
    cout << vector2[0] << endl;
    cout << vector2[1] << endl;
    
    cout << "\nElements using the Vector syntax: " << endl;
    
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    
    cout << "\nThere are " << vector2.size() << " Elements in vector2" << endl;
    
    vector <vector<int>> vector_2d;
    
    /*
     *  {
     *      {0,0,0,0},
     *      {0,0,0,0},
     *      {0,0,0,0}
     *  };
     * 
     */
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    /*
     *  {
     *      {10,20,0,0},
     *      {100,200,0,0},
     *      {0,0,0,0}
     *  };
     * 
     */
    
    cout << "\nUpdated Elements for vector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << endl; //10
    cout << vector_2d.at(0).at(1) << endl; //20
    //cout << vector_2d.at(0).at(2) << endl; //empty
    //cout << vector_2d.at(0).at(3) << endl; //empty
    
    cout << vector_2d.at(1).at(0) << endl; //100
    cout << vector_2d.at(1).at(1) << endl; //200
    //cout << vector_2d.at(1).at(2) << endl; //empty
    //cout << vector_2d.at(1).at(3) << endl; //empty
    
    cout << "============================" << endl;
    
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    
    vector1.at(0) = 1000;
    
    cout << "\nUpdated Elements for vector_2d: " << endl;
    cout << vector_2d.at(0).at(0) << endl; //10
    cout << vector_2d.at(0).at(1) << endl; //20
    cout << vector_2d.at(1).at(0) << endl; //100
    cout << vector_2d.at(1).at(1) << endl; //200
    
    cout << "\nUpdated Elements for vector1: " << endl;
    
    cout << vector1[0] << endl; //1000
    cout << vector1[1] << endl;
    
    
    cout << endl;
    return 0;
}

