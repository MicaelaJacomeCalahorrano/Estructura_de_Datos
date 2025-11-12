//Cola Circular
//Cuando el final llega al final del arreglo, se "regresa" al inicio
//utiliza %

#include <iostream>
using namespace std;

const int MAXQ = 5; //Capacidad de la cola

//Estructura de la cola circular
struct ColaCircular {
	int data [MAXQ]; //Arreglo que almacena los elementos
	int front; //Indice del frente
	int rear; //Indice del final
	int count; //Cantidad de elementos de la cola
};

//Inicializa la cola circular vacia
void inicializar(ColaCircular& c){
	c.front = 0;
	c.rear = -1;
	c.count = 0;
}

//Verifica si esta vacia o llena
bool vacia(const ColaCircular& c){return c.count ==0;}
bool llena(const ColaCircular& c){return c.count ==MAXQ;}

//Inserta un elemento al final de la cola
bool encolar (ColaCircular& c, int v)
{
	if (llena(c)) return false;
	c.rear =  (c.rear + 1) % MAXQ; //Avanza el indice circularmente
	c.data[c.rear] = v;
	c.count++;
	return true;
}

//Elimina un elemento de frente
bool desencolar(ColaCircular& c, int& out){
	if (vacia(c)) return false;
	out = c.data[c.front];
	c.front = (c.front + 1) %MAXQ; //Avanza circularmente
	c.count--;
	return true;
}

//Ejemplo de uso
int main(){
	ColaCircular c; inicializar(c);
	
	//Insertamos cinco elementos
	for(int i=1; i<=5; i++)
		cout<< (encolar(c, i*10) ? "Encolado.\n" : "Cola llena.\n");
	
	int x;
	//Quitamos uno y volvemos a insertar
	desencolar(c,x); cout<< "Desencolado: "<< x <<"\n";
	encolar(c, 60); //Reutiliza el espacio liberado
	
	//Mostramos el contenido restante
	while (desencolar(c,x))
		cout<<" Desencolado: "<< x << "\n";
	
	return 0;
}
