#include <iostream>
using namespace std;

static int contador = 0;
static const int LIMITE = 5;

int main(int argc, char* argv[]) {
    contador++;
    
    cout << "Llamada recursiva #" << contador << endl;
    

    if (contador >= LIMITE) {
        cout << "Se alcanzó el límite." << endl;
        cout << "Se termina la recursión luego de " << contador << " llamadas." << endl;
        return 0;
    }
    
    cout << "Llamada recursiva en proceso..." << endl;
    main(argc, argv);
    
    cout << "Se devuelve llamada #" << contador << endl;
    contador--;
    
    return 0;
}
