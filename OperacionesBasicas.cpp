#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    
    char opcion;
    
    // Ciclo while para mostrar el menu continuamente hasta que se elija salir
    while (true) {
        // Mostrar opciones del menu
        cout <<"¿Desea realizar una operacion matematica basica entre dos numeros? (S/N)?"<<endl;

        // Solicitar entrada al usuario
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Evaluar la opcion seleccionada
        switch (opcion) {
            case 'S':
            case 's':

                //Determinar si un numero es par o impar 
                int numero;
                int numero2;
                int resultado;
                char eleccion;
                cout<<"¿Cual de las siguientes operaciones desea realizar?"<<endl;
                cout<<"1. SUMA"<<endl;
                cout<<"2. RESTA"<<endl;
                cout<<"3. MULTIPLICACION"<<endl;
                cout<<"4. DIVISION"<<endl;
                cout<<"Ingrese el numero que corresponde"<<endl;
                cin>>eleccion;

                switch (eleccion){
                    case '1':
                    cout<<"Ingrese el primer numero:"<<endl;
                    cin>>numero;
                    cout<<"Ingrese el segundo numero:"<<endl;
                    cin>>numero2;
                    resultado = numero + numero2;
                    cout<<"La suma es: "<<resultado<<endl;
                    break;

                    case '2':
                    cout<<"Ingrese el primer numero:"<<endl;
                    cin>>numero;
                    cout<<"Ingrese el segundo numero:"<<endl;
                    cin>>numero2;
                    resultado = numero - numero2;
                    cout<<"La resta es: "<<resultado<<endl;
                    break;

                    case '3':
                    cout<<"Ingrese el primer numero:"<<endl;
                    cin>>numero;
                    cout<<"Ingrese el segundo numero:"<<endl;
                    cin>>numero2;
                    resultado = numero * numero2;
                    cout<<"La multiplicacion es: "<<resultado<<endl;
                    break;

                    case '4':
                    cout<<"Ingrese el primer numero:"<<endl;
                    cin>>numero;
                    cout<<"Ingrese el segundo numero:"<<endl;
                    cin>>numero2;
                    if(numero2==0){
                        cout<<"Error no es posible dividir  entre cero."<<endl;
                    }
                    else{
                    resultado = numero / numero2;
                    cout<<"La division es: "<<resultado<<endl;
                    }
                    break;
                    default:
                    cout<<"Esta opción no esta disponible."<<endl;
                    break;
                }

                break;
        
            case 'N':
            case 'n':
                cout << "Saliendo del programa..." << endl;
                // Salir del ciclo while y finalizar el programa
                return 0;
                break;
        
            default:
                cout << "Error, por favor escriba solo S o N." << endl; 
                break;
        }
    
    }

}