#include <iostream>
using namespace std;

class Matematica {
public:
    int mcd(int a, int b, int nivel = 0) {
        string sangria(nivel * 2, ' ');
        cout << sangria << "mcd(" << a << ", " << b << ")" << endl;
        
        if (b == 0) {
            cout << sangria << "Caso base: " << a << ", " << b << " = " << a << endl;
            return a;
        }
        
        return mcd(b, a % b, nivel + 1);
    }
};

int main() {
    Matematica math;
    int a, b;
    
    cout << "Ingrese dos numeros enteros positivos: ";
    cin >> a >> b;
    
    if (a <= 0 || b <= 0) {
        cout << "Ambos numeros deben ser positivos." << endl;
        return 1;
    }
    
    
    int resultado = math.mcd(a, b);
    cout << "MCD" << a << ", " << b << " = " << resultado << endl;
    
    return 0;
}
