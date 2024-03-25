#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    
    char opcion;
    
    // Ciclo while para mostrar el menu continuamente hasta que se elija salir
    while (true) {
        // Mostrar opciones del menu
        cout <<"¿Desea conocer la hipotenusa de un triangulo rectangulo S/N?"<<endl;

        // Solicitar entrada al usuario
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Evaluar la opcion seleccionada
        switch (opcion) {
            case 'S':
            case 's':
                double base, altura, hipotenusa;
                cout << "Ingrese la longitud de la base del triangulo: "<<endl;
                cin >> base;

                cout << "Ingrese la longitud de altura del triangulo: "<<endl;
                cin >> altura;
                
                //La formula para calcular la Hipotenusa es:  
                
                //H = âˆš(b^2 + a^2)
                //Donde H es la Hipotenusa, b es la Base y a es la Altura.

                hipotenusa = sqrt((base*base)+(altura*altura));

                cout <<"La longitud de la Hipotenusa del triangulo rectangulo es de: "<<hipotenusa<<endl;
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