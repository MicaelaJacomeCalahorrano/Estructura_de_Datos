#include <iostream>
using namespace std;

class Hanoi {
private:
    int movimientos;
    
public:
    Hanoi() : movimientos(0) {}
    
    void mover(int n, char origen, char destino, char auxiliar) {
       
        if (n == 1) {
            movimientos++;
            cout << "Movimiento " << movimientos << ": Mover disco 1 de " << origen << " a " << destino << endl;
            return;
        }
        
        mover(n - 1, origen, auxiliar, destino);
        
        
        movimientos++;
        cout << "Movimiento " << movimientos << ": Mover disco " << n << " de " << origen << " a " << destino << endl;
        
        
        mover(n - 1, auxiliar, destino, origen);
        
    }
    
    int getMovimientos() const { return movimientos; }
};

int main() {
    Hanoi hanoi;
    int discos;
    
    cout << "Ingrese el numero de discos: ";
    cin >> discos;
    
    if (discos <= 0) {
        cout << "La cantidad debe ser positiva." << endl;
        return 1;
    }
    
    
    hanoi.mover(discos, 'A', 'C', 'B');
    cout << "Cantidad de movimientos: " << hanoi.getMovimientos() << endl;
    
    return 0;
}
