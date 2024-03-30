#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

int main() {
    char opcion;

    while (true) {
        cout <<"¿Te cuento un chiste (S/N)?"<< endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 'S':
            case 's': {
                srand(time(0)); // Inicializar la semilla para números aleatorios

                // Lista de chistes
                vector<string> chistes = {
                    "¿Que le dice una iguana a su hermana gemela? Somos Iguanitas",
                    "¿Que hace una abeja en el gimnasio? Zum-ba",
                    "¿Por que los pajaros no usan Facebook? Porque ya tienen Twitter",
                    "¿Que le dice un jaguar a otro jaguar? Jaguar you",
                    "¿Cual es el animal mas antiguo? La cebra, porque esta en blanco y negro",
                    "Carino, tengo dos noticias, una buena y otra mala, he dejado las drogas, pero no se donde.",
                    "¿Que le dijo un arbol a otro arbol? Se me paro el pajarito.",
                    "¿En que se parecen los hombres a los calcetines? En que solo sirven para meter la pata.",
                    "¿Que es peor que encontrar un gusano al morder una manzana? Encontrar medio gusano.",
                    "Tengo 4 dedos, 3 piernas, y un brazo, ¿Que soy? Un deforme. ",
                    "¿Por que el mar hecha espuma? Por que la sirenita se llama Ariel.",
                    "¿Sabes por que se suicido el gusano? Porque su mama era una arrastrada.",
                    "¿Cual es el hombre mas manso  del mundo? El hijo de Superman, Supermancito."
                };

                // Seleccionar un chiste aleatorio de la lista
                int indiceChiste = rand() % chistes.size();
                string chisteSeleccionado = chistes[indiceChiste];

                // Mostrar el chiste seleccionado al usuario
                cout << "¡Bienvenido al contador de chistes!" << endl;
                cout << "Aqui tienes un chiste para alegrarte el dia:" << endl;
                cout << chisteSeleccionado << endl;
                break;
            }
            case 'N':
            case 'n':
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Error, por favor escriba solo S o N." << endl;
                break;
        }
    }

    return 0;
}