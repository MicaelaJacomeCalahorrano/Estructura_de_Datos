#include <iostream>
#include <vector>
using namespace std;

class ArregloOps {
private:
    int sumaRec(const vector<int>& v, int n) {
        if (n == 0) {
            return 0;
        }
        
        return v[n - 1] + sumaRec(v, n - 1);
    }
    
public:
    int suma(const vector<int>& v) {
        return sumaRec(v, v.size());
    }
};

int main() {
    ArregloOps ops;
    vector<int> numeros;
    int n, valor;
    
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Ingrese al menos un numero." << endl;
        return 1;
    }
    
    cout << "Ingrese " << n << " numeros:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> valor;
        numeros.push_back(valor);
    }
    
    int resultado = ops.suma(numeros);
    cout << "La suma es: " << resultado << endl;
    
    return 0;
}
