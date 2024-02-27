#include <iostream>
using namespace std;

int main() {
    // Define an array of character pointers (char*)
    char* strings[] = {
        "Hello",
        "World",
        "C++",
        "Programming"
    };

    // Define a pointer to a pointer to a character (char**)
    char** ptr_to_ptr = strings;

    // Access and print each string in the array
    for (int i = 0; i < 4; i++) {
        cout << *ptr_to_ptr << endl;
        ptr_to_ptr++; // Move the pointer to the next string
    }

    return 0;
}
