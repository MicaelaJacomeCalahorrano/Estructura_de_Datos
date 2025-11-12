#include <iostream>
using namespace std;

//estructura lista simple
struct NodoSimple {
	int dato;
	NodoSimple* siguiente;
};

//estructura lista doble en enlazada
struct NodoDoble{
	int dato;
	NodoDoble* siguiente;
	NodoDoble* anterior;
};

//estructura lista circular
struct NodoCircular{
	int dato;
	NodoCircular* siguiente;
};

//estructura lista circular doble
struct NodoCircularDoble{
	int dato;
	NodoCircularDoble* siguiente;
	NodoCircularDoble* anterior;
};

//funcion lista simple
void insertarSimple(NodoSimple*& cabeza, int valor){
	NodoSimple* nuevo= new NodoSimple();
	nuevo->dato =valor;
	nuevo->siguiente=cabeza;
	cabeza=nuevo;
}

void mostrarSimple(NodoSimple* cabeza){
	cout<<"\n Lista Simple-Enlazada: ";
	NodoSimple* actual = cabeza;
	while(actual != nullptr){
		cout<<actual->dato<<" ->";
		actual = actual->siguiente;
	}
	cout<<" Null\n";
}

//funcion lista-doble-enlazada
void insertarDoble(NodoDoble*& cabeza, int valor){
	NodoDoble* nuevo = new NodoDoble;
	nuevo->dato = valor;
	nuevo->siguiente = cabeza;
	nuevo->anterior = nullptr;
	if (cabeza!=nullptr){
		cabeza->anterior=nuevo;
	}
	cabeza= nuevo;
}

void mostrarDoble(NodoDoble* cabeza){
	cout<<"\n Doble Enlazada hacia adelante: ";
	NodoDoble* actual = cabeza;
	NodoDoble* ultimo = nullptr;
	while(actual!=nullptr){
		cout<< actual->dato<< "<->";
		ultimo = actual;
		actual = actual->siguiente;
	}
	cout<<"Null\n";
	cout<<"Lista doblemente Enlazada hacia atras: ";
	while(actual!=nullptr){
		cout<< ultimo->dato<< "<->";
		ultimo = ultimo->anterior;
	}
	cout<<"Null\n";
}

//Funcion Lista Circular
void insertarCircular(NodoCircular*& cabeza, int valor){
	NodoCircular* nuevo = new NodoCircular();
	nuevo->dato = valor;
	if(cabeza = nullptr){
		cabeza= nuevo;
		nuevo->siguiente = cabeza;
	} else{
		NodoCircular* actual= cabeza;
		while(actual->siguiente!=cabeza){
			actual = actual->siguiente;
		}
		actual->siguiente = nuevo;
		nuevo->siguiente = cabeza;
	}
}

void mostrarCircular(NodoCircular* cabeza){
	if (cabeza == nullptr){
		cout<<"\n Lista Circular Vacia...\n";
		return;
	}
	cout<<"\n Lista Circular: ";
	NodoCircular*actual = cabeza;
	do{
		cout<<actual->dato<<"->";
		actual = actual->siguiente;
	}while (actual!= cabeza);
	cout<<"Vuelve al Inicio\n";
}

// Función para insertar en lista circular doble
void insertarCircularDoble(NodoCircularDoble*& cabeza, int valor) {
    NodoCircularDoble* nuevo = new NodoCircularDoble();
    nuevo->dato = valor;
    
    if (cabeza == nullptr) {
        cabeza = nuevo;
        cabeza->siguiente = cabeza;
        cabeza->anterior = cabeza;
    } else {
        NodoCircularDoble* ultimo = cabeza->anterior;
        
        nuevo->siguiente = cabeza;
        nuevo->anterior = ultimo;
        ultimo->siguiente = nuevo;
        cabeza->anterior = nuevo;
    }
}

// Función para mostrar lista circular doble hacia adelante
void mostrarCircularDobleAdelante(NodoCircularDoble* cabeza) {
    if (cabeza == nullptr) {
        cout << "\n Lista Circular Doble Vacia...\n";
        return;
    }
    
    cout << "\n Lista Circular Doble (Adelante): ";
    NodoCircularDoble* actual = cabeza;
    do {
        cout << actual->dato << " <-> ";
        actual = actual->siguiente;
    } while (actual != cabeza);
    cout << "(Vuelve al inicio)\n";
}

void mostrarCircularDobleAtras(NodoCircularDoble* cabeza) {
    if (cabeza == nullptr) {
        cout << "\n Lista Circular Doble Vacia...\n";
        return;
    }
    
    cout << " Lista Circular Doble (Atras): ";
    NodoCircularDoble* actual = cabeza->anterior;
    do {
        cout << actual->dato << " <-> ";
        actual = actual->anterior;
    } while (actual != cabeza->anterior);
    cout << "(Vuelve al final)\n";
}

int main(){
    
    int opcion;
    int num;
    NodoSimple* cabezaSimple = nullptr;
    NodoDoble* cabezaDoble = nullptr;
    NodoCircular* cabezaCircular = nullptr;
    
    do {
        cout<<"Menu"<<endl;
        cout<<"1. Insertar Lista Simple"<<endl;
        cout<<"2. Insertar Lista Doble"<<endl;
        cout<<"3. Insertar Lista Circular"<<endl;
        cout<<"4. Insertar Lista Circular Doble"<<endl;
        cout<<"5. Mostrar Lista Simple"<<endl;
        cout<<"6. Mostrar Lista Doble"<<endl;
        cout<<"7. Mostrar Lista Circular"<<endl;
        cout<<"8. Mostrar Lista Circular Doble"<<endl;
        cout<<"9. Salir"<<endl;
        cout<<"Escoja una opcion: ";
        cin>>opcion;
        
        switch (opcion){
            
            case 1:
                cout << "Ingrese un numero para la lista: ";
                cin >> num;
                insertarSimple(cabezaSimple, num);
                cout << "Insertado" << endl;
                break;
            
            case 2:
                cout<<"Ingrese un numero para la lista: ";
                cin>>num;
                insertarDoble(cabezaDoble, num);
                cout<<"Insertado"<<endl;
                break;
                
            case 3:
                cout<<"Ingrese un numero para la lista: ";
                cin>>num;
                insertarCircular(cabezaCircular, num);
                cout<<"Insertado"<<endl;
                break;
                
            case 4:
            	cout << "Ingrese un numero para la lista circular doble: ";
                cin >> num;
                insertarCircularDoble(cabezaCircularDoble, num);
                cout << "Insertado" << endl;
                break;
                
            case 5:
                mostrarSimple(cabezaSimple);
                break;
                
            case 6:
                mostrarDoble(cabezaDoble);
                break;
                
            case 7:
                mostrarCircular(cabezaCircular);
                break;
                
            case 8:
            	mostrarCircularDobleAdelante(cabezaCircularDoble);
                mostrarCircularDobleAtras(cabezaCircularDoble);
                break;
                
            case 9:
                cout<<"Saliendo..."<<endl;
                break;
                
            default:
                cout<<"Opcion invalida!"<<endl;
        }
        cout<<endl;
        
    } while(opcion != 9);
    
    return 0;
}
