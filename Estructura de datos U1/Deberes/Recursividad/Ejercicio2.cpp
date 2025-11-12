#include <iostream>
using namespace std;

class Serie {
private:
    long llamadas;
    
public:
    Serie() : llamadas(0) {}
    
    long fibonacci(long n) {
        llamadas++;
        
       
        if (n == 0) return 0;
        if (n == 1) return 1;
        
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    
    long getLlamadas() const { return llamadas; }
    void resetLlamadas() { llamadas = 0; }
};

int main() {
    Serie serie;
    long n;
    
    cout << "Ingrese la posicion n de Fibonacci: ";
    cin >> n;
    
    if (n < 0) {
        cout << "No se permiten negativos." << endl;
        return 1;
    }
    
    serie.resetLlamadas();
    long resultado = serie.fibonacci(n);
    long totalLlamadas = serie.getLlamadas();
    
    cout << "Fibonacci(" << n << ") = " << resultado << endl;
    cout << "Numero aproximado de llamadas recursivas: " << totalLlamadas << endl;
    
    return 0;
}
