// Section 12
// Return Pointer
#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0) {
   int *new_storage {nullptr};// Declare a pointer to int and initialize it to nullptr
   new_storage = new int[size];// Allocate memory for an array of 'size' integers
   for (size_t i{0}; i < size; ++i)// Loop through each element of the array
      *(new_storage + i) = init_value; // Initialize each element with 'init_value'
   return new_storage;// Return the pointer to the newly created array
}

void display(const int *const array, size_t size) {
    for (size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}
int main() {
    int *my_array {nullptr};
    size_t size;
    int init_value {};
    
    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "What value would you like them initialized to? ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    cout << "\n--------------------------------------" << endl;

    display(my_array, size);
    delete [] my_array;
    return 0;
}