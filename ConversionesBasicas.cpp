#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    
    char opcion;
    
    // Ciclo while para mostrar el menu continuamente hasta que se elija salir
    while (true) {
        // Mostrar opciones del menu
        cout <<"¿Desea realizar alguna conversion de distacia, longitud o peso? (S/N)?"<<endl;

        // Solicitar entrada al usuario
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Evaluar la opcion seleccionada
        switch (opcion) {
            case 'S':
            case 's':

                //Menu de selección 
                double numero;
                double resultado;
                char eleccion;
                cout<<"¿Cual de las siguientes operaciones desea realizar?"<<endl;
                cout<<"1. Conversion de kilometros y millas"<<endl;
                cout<<"2. Conversion de metros y pulgadas"<<endl;
                cout<<"3. Conversion de kilos y libras"<<endl;
                cout<<"Ingrese el numero que corresponde"<<endl;
                cin>>eleccion;
                switch (eleccion)
                {
                //Conversion de kilometros a millas y viceversa 
                case '1':
                    cout<<"Ha seleccionado la conversion de kilometros y millas"<<endl;
                    cout<<"¿Que tipo de medida de longitud  desea convertir?"<<endl;
                    cout<<"1. Millas"<<endl;
                    cout<<"2. Kilometros"<<endl;
                    cout<<"Ingrese el numero que corresponde"<<endl;
                    cin>>eleccion;
                    if(eleccion!='1' && eleccion !='2'){
                        cout<<"Opcion invalida, vuelva a intentarlo."<<endl;
                    }else{
                        cout<<"Ingrese la cantidad a convertir"<<endl;
                        cin>>numero;
                        if(eleccion=='1'){
                        resultado=numero*1.60934;
                        cout<<"La conversion es de: "<<resultado<<" Kilometros"<<endl;
                        }else{
                        resultado=numero/1.60934;
                        cout<<"La conversion es de: "<<resultado<<" Millas"<<endl;
                        }
                    }
                    break;
                //Conversion de metros a pulgadas y viceversa     
                case '2':
                    cout<<"Ha seleccionado la conversion de metros y pulgadas"<<endl;
                    cout<<"¿Que tipo de medida de longitud  desea convertir?"<<endl;
                    cout<<"1. Metros"<<endl;
                    cout<<"2. Pulgadas"<<endl;
                    cout<<"Ingrese el numero que corresponde"<<endl;
                    cin>>eleccion;
                    if(eleccion!='1' && eleccion !='2'){
                        cout<<"Opcion invalida, vuelva a intentarlo."<<endl;
                    }else{
                        cout<<"Ingrese la cantidad a convertir"<<endl;
                        cin>>numero;
                        if(eleccion=='1'){
                        resultado=numero*39.37;
                        cout<<"La conversion es de: "<<resultado<<" Pulgadas"<<endl;
                        }else{
                        resultado=numero/39.37;
                        cout<<"La conversion es de: "<<resultado<<" Metros"<<endl;
                        }
                    }
                    break;
                //Conversion de kilos a libras y viceversa     
                case '3':
                    cout<<"Ha seleccionado la conversion de kilos y libras"<<endl;
                    cout<<"¿Que tipo de medida de longitud  desea convertir?"<<endl;
                    cout<<"1. Kilos"<<endl;
                    cout<<"2. Libras"<<endl;
                    cout<<"Ingrese el numero que corresponde"<<endl;
                    cin>>eleccion;
                    if(eleccion!='1' && eleccion !='2'){
                        cout<<"Opcion invalida, vuelva a intentarlo."<<endl;
                    }else{
                        cout<<"Ingrese la cantidad a convertir"<<endl;
                        cin>>numero;
                        if(eleccion=='1'){
                        resultado=numero*2.205;
                        cout<<"La conversion es de: "<<resultado<<" Libras"<<endl;
                        }else{
                        resultado=numero/2.205;
                        cout<<"La conversion es de: "<<resultado<<" Kilos"<<endl;
                        }
                    }
                    break;                        
                default:
                    cout << "Opcion no valida, intente nuevamente.\n";
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