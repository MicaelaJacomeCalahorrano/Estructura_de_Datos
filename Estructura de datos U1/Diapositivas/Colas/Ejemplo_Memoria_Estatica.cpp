#include<iostream>
using namespace std;

#define MAX 5 //tamaño máximo de la cola

//Aquí define la estructura y define una cola estática
struct Cola{
	int datos[MAX]; //Arreglo para almacenar los datos
	int front;	//Indice alfrente
	int rear;	//Indice del final
};

//Inicializa la cola vac[ia
void inicializar(Cola &c){
	c.front = 0;
	c.rear = -1;
}

//Verifica si la cola está vacía
bool estaVacia(Cola c){
	return c.front>c.rear;
}

//verifica si la cola esta llena
bool estaLlena(Cola &c){
	return c.rear == MAX -1;
}

//Insertar un nuevo elemento al final de la cola
void encolar(Cola &c, int valor){
	if(!estaLlena(c)){
		c.datos[++c.rear] = valor;
		cout<<"Elemento "<<valor<<" en colado. \n";
	} else {
		cout<<"Cola llena. \n";
	}
}

//Elimina el elemento del frente 
int desencolar(Cola &c){
	if(!estaVacia(c)){
		return c.datos[c.front++];
	}else {
		cout << "Cola vacia. \n";
		return -1;
	}
}

//Funcion principal
int main(){
	Cola c;
	inicializar(c);
	
	//Pruebas
	encolar(c, 10);
	encolar(c, 20);
	encolar(c, 30);
	
	cout<< "Desencolado: "<<desencolar(c)<<endl;
	cout<< "Desencolado: "<<desencolar(c)<<endl;
	
	encolar(c, 40);
	encolar(c, 50);
	encolar(c, 60); //Intentara encolar cuando esta llena
	
	cout<< " Desencolado:"<<desencolar(c)<<endl;
	
	cout<<"Direccion de la cola: "<< &c <<endl;
	cout<<" Direccion del arreglo de datos: "<< &c.datos <<endl;
	cout<< " Direccion del primer elemento: "<<&c.datos[0] <<endl;
	return 0;
}
