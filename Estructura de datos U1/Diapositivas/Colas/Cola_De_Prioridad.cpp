#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Nodo con valor y prioridad
struct Node {
	int val;	//Valor del elemento
	int priority; //Prioridad (mayor = mas importante)
	Node* next; //Puntero al siguiente 
};

//Estructura de la cola de prioridad
struct PQueue{
	Node* head;
};

//Inicializa la cola vacia
void init(PQueue& q){q.head = nullptr;}
bool empty(const PQueue& q){ return q.head ==nullptr;}

//Insertar ordenando por prioridad (descendendente)
void push(PQueue& q, int v, int p){
	Node* n= new Node{v,p,nullptr};
	if (empty(q) || p> q.head->priority){
		n->next = q.head;
		q.head = n;
		return;
	}
	Node* cur = q.head;
	while (cur->next && cur->next->priority >=p)
		cur = cur->next;
	n-> next = cur->next;
	cur->next = n;
}

//Elimina el elemento de mayor prioridad (al frente)
bool pop(PQueue& q, int& outVal, int& outPri){
	if ( empty(q)) return false;
	Node* t = q.head;
	outVal = t->val;
	outPri = t->priority;
	q.head = t->next;
	delete t;
	return true;
}

//Aleatorio de la probabilidad, de 1 a 3
int prioridadAleatoria() {
    return rand() % 3 + 1; 
}

//Ingresar Datos

//Ejemplo de Uso
int main(){
	srand(time(0));
	PQueue q; init (q);
	
	/*//Insertamos elementos con distancias prioridades
	push(q,100,1); //prioridad baja
	push(q, 200,3); //prioridad alta
	push(q, 300,2); //prioridad media*/
	
	int v,p;
	
	n == 3;
	
	for(int i = 0; i < n; i++) {
		cout << "Ingrese el valor del dato " << i+1 << ": ";
		cin >> valor;
		int prioridad = rand() % 10 + 1; // Prioridad aleatoria del 1 al 10
		push(q, valor, prioridad);
		cout << "Dato " << valor << " ingresado con prioridad: " << prioridad << endl;
	}
	//Se eliminan en orden e prioridad(3,2,1)
	while(pop(q,v,p))
		cout<<"Elemento "<< v << " con prioridad "<< p << " eleminado.\n";
		
	return 0;
}
