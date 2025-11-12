#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

struct Cola {
	Nodo *front;
	Nodo *rear;
};

void inicializar (Cola &c){
	c.front = c.rear = nullptr;
}

bool estaVacia(Cola c){
	return c.front == nullptr;
}

void encolar (Cola &c, int valor){
	Nodo *nuevo = new Nodo{valor, nullptr};
	if (estaVacia(c)){
		c.front = c.rear = nuevo;
	} else {
		c.rear->siguiente = nuevo;
		c.rear = nuevo;
	}
}

int desencolar(Cola &c){
	if (estaVacia(c)){
		cout<< "Cola vaciaa. \n";
		return -1;
	} else {
		Nodo *temp = c.front;
		int valor = temp->dato;
		c.front = c.front->siguiente;
		delete temp;
		return valor;
	}
}

//FUNCION PRINCIPAL

int main(){
	Cola c;
	inicializar(c);
	
	encolar(c, 10);
	encolar(c, 20);
	encolar(c, 30);
	
	cout<< "Desencolado: "<<desencolar(c)<<endl;
	cout<< "Desencolado: "<<desencolar(c)<<endl;
	
	encolar(c, 40);
	encolar(c, 50);
	cout<< "Desencolado: "<<desencolar(c)<<endl;
	cout<< "Desencolado: "<<desencolar(c)<<endl;
	cout<< "Desencolado: "<<desencolar(c)<<endl;
	
	//Extra delotro codigo
	
	cout<<"Direccion de la cola: "<< &c <<endl;
	cout<<" Direccion del ultimo elemento: "<< &c.rear <<endl;
	cout<< " Direccion del primer elemento: "<<&c.front <<endl;
	
	//Verifica que ya esta vacia
	desencolar(c);
	return 0;
}
