#include <iostream>
using namespace std;

class Matematica {
public:
    long factorial(long n, int profundidad = 0) {
        
        string niveles(profundidad * 2, ' ');
        cout << niveles << "Factorial: " << n << endl;
        
        
        if (n == 0 || n == 1) {
            cout << niveles << "Caso base: " << n << endl;
            return 1;
        }
        
        long resultado = n * factorial(n - 1, profundidad + 1);
        
        cout << niveles << "Resultado del factorial:" << n << resultado << endl;
        return resultado;
    }
};

int main() {
    Matematica math;
    long numero;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    if (numero < 0) {
        cout << "No hay factorial para numeros negativos." << endl;
        return 1;
    }
    
    cout << "Factorial" << endl;
    long resultado = math.factorial(numero);
    cout << "Resultado: " << numero << "! = " << resultado << endl;
    
    return 0;
}
