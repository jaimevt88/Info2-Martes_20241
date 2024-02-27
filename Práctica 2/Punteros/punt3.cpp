// C++ program to illustrate Array Name as Pointers
#include <iostream>
using namespace std;
void prueba()
{
    
    int val[3] = { 5, 10, 20 };


    int* ptr;

    // Asignar la dirección de val[0] a ptr
    // Se puede utilizar ptr=&val[0];
    ptr = val;
    cout << "Elementos: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];
}
// Driver program
int main() { prueba(); }
