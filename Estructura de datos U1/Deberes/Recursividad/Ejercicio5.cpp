#include <iostream>
using namespace std;

class RecursividadDemo {
public:
    long factorialTrazado(long n, int profundidad = 0) {
        string sangria(profundidad * 2, ' ');
        
        
        cout << sangria << "Ingresando factorial" << n << endl;
        
        
        if (n == 0 || n == 1) {
            cout << sangria << "Devolviendo factorial " << n << " = 1" << endl;
            return 1;
        }
        
       
        long resultado = n * factorialTrazado(n - 1, profundidad + 1);
        
        
        cout << sangria << "Devolviendo factorial " << n << " = " << resultado << endl;
        return resultado;
    }
};

int main() {
    RecursividadDemo demo;
    
    
    long valores[] = {3, 4, 5};
    
    for (long n : valores) {
        cout << "Factorial para n numero = " << n << endl;
        long resultado = demo.factorialTrazado(n);
        cout << "Resultado: " << n << "! = " << resultado << endl;
        
    }
    
    return 0;
}
