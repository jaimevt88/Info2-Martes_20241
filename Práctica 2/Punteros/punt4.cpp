// C++ program to illustrate Pointer Arithmetic
#include <iostream>
using namespace std;
void prueba()
{
 
    int v[3] = { 10, 100, 200 };


    int* ptr;

   
    ptr = v;

    for (int i = 0; i < 3; i++) {
        cout << " ptr = " << ptr << "\n";
        cout << " *ptr = " << *ptr << "\n";

        // Incrementar ptr
        ptr++;
    }
}

//// Driver program
int main() { prueba(); }
