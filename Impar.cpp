#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    
    char opcion;
    
    // Ciclo while para mostrar el menu continuamente hasta que se elija salir
    while (true) {
        // Mostrar opciones del menu
        cout <<"¿Desea determinar si un numero es par o impar (S/N)?"<<endl;

        // Solicitar entrada al usuario
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Evaluar la opcion seleccionada
        switch (opcion) {
            case 'S':
            case 's':

                //Determinar si un numero es par o impar 
                int numero;

                cout<<"Ingrese el numero"<<endl;
                cin>> numero;
                if(numero%2==0){
                    cout<<"El numero "<<numero<<" es par."<<endl;
                }else{
                    cout<<"El numero "<<numero<<" es impar."<<endl;
                }
                break;
        
            case 'N':
            case 'n':
                cout << "Saliendo del programa..." << endl;
                // Salir del ciclo while y finalizar el programa
                return 0;
            default:
                cout << "Error, por favor escriba solo S o N." << endl; 
                break;
        }
    }
    return 0;
    
}