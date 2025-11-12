#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class CadenaOps {
private:
    string limpiarCadena(const string& texto) {
        string resultado;
        for (char c : texto) {
            if (!isspace(c)) {
                resultado += tolower(c);
            }
        }
        return resultado;
    }
    
public:
    bool esPalindromo(const string& texto, int inicio, int fin) {
        if (inicio >= fin) {
            return true;
        }
        
        if (texto[inicio] != texto[fin]) {
            return false;
        }
       return esPalindromo(texto, inicio + 1, fin - 1);
    }
    
    bool esPalindromo(const string& texto) {
        string textoLimpio = limpiarCadena(texto);
        if (textoLimpio.empty()) {
            return true;
        }
        return esPalindromo(textoLimpio, 0, textoLimpio.length() - 1);
    }
};

int main() {
    CadenaOps ops;
    string texto;
    
    cout << "Ingrese una palabra o frase: ";
    getline(cin, texto);
    
    if (ops.esPalindromo(texto)) {
        cout << "\"" << texto << "\" Si es un palindromo." << endl;
    } else {
        cout << "\"" << texto << "\" No es un palindromo." << endl;
    }
    
    return 0;
}
