// Ilustración de punteros

#include <iostream>
using namespace std;
void impPunteros();
// Driver program
int main()
{
    impPunteros();
    return 0;
}
void impPunteros()
{
    int var = 20;

    // declarar puntero
    int* ptr;

    // asignar la posición en memoria de la variable al puntero
    ptr = &var;


    cout << "Valor  ptr = " << ptr << "\n";
    cout << "Valor var = " << var << "\n";
    cout << "Valor *ptr = " << *ptr << "\n";
}
