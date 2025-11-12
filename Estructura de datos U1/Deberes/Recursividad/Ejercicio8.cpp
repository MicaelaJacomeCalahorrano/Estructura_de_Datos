#include <iostream>
#include <string>
using namespace std;

class CadenaOps {
public:
    void imprimirInversa(const string& texto, int indice = 0) {
        if (indice >= texto.length()) {
            return;
        }
        imprimirInversa(texto, indice + 1);
        
       cout << texto[indice];
    }
};

int main() {
    CadenaOps ops;
    string texto;
    
    cout << "Ingrese una palabra o frase: ";
    getline(cin, texto);
    
    cout << "Cadena original: " << texto << endl;
    cout << "Cadena invertida: ";
    ops.imprimirInversa(texto);
    cout << endl;
    
    return 0;
}
