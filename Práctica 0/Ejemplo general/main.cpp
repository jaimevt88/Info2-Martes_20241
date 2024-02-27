/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include "iostream"


using namespace std;

int main()
{
    int numero;

    cout << "Número de letras: " << "\n";
    cin >> numero;
    
    int letra = 'A';
    int inicioLetra = 'A';
    //cout << "\n" << (numero*2 - 1) << "\n";

    for(int i = 0 ; i < numero ; i++){
        letra = 'A';
        for(int j = 0 ; j < (numero*2 - 1) ; j++){
            if(j<=i){
                cout << (char)(letra);
                letra = letra + 1;
                if((letra)== inicioLetra + numero){
                    letra = letra -1;
                    //cout << "\n" << (char)(letra) << (i) << (j) <<"\n";
                }
                continue;
            }
            if(j<(numero*2 -2 -i)){
                cout << " ";
                continue;
            }
            if(j<(numero*2 - 1)){
                letra = letra - 1;
                cout << (char)(letra);
            }
        }
        cout << "\n";
    }



   return 0;
}
