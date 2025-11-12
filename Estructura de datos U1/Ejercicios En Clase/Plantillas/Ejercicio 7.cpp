/*INTEGRANTES
Michael Fuentes
Jorge Fuentes
Micaela Jácome
Mateo Rogerón
*/

#include <iostream>
#include <string>

using namespace std;

//plantilla

template <class T>
class Pila 
{
	private:
		static const int TamMax = 25;
		T cant_elementos[TamMax];
		int tope;
	public:
		Pila() : tope (-1){}
		
		void push (T elemento)
		{
			if (tope<TamMax - 1){
				cant_elementos[++tope]=elemento;
			}
		}
		
		void pop()
		{
			if (!isEmpty()){
				tope--;
			}else {
				cout<<"Pila vacía"<<endl;
			}
		}
		
		T top(){
			if (!isEmpty()) {
				return cant_elementos[tope];
			} else {
				cout<<"Pila vacía"<<endl;	
			}
		}
		
		bool isEmpty(){
			return tope == -1;
		}
};

class Alumno {
	private:
    	string nombre;
    	int edad;    
	public:
    	Alumno(string n = "", int e = 0) : nombre(n), edad(e) {}
    
	    friend ostream& operator<<(ostream& os, const Alumno& a) {
	        os << "Alumno: " << a.nombre << ", Edad: " << a.edad;
	        return os;
	    }
};

int main ()
{
	//enteros
	Pila<int> pilaEnteros;
    pilaEnteros.push(7);
    pilaEnteros.push(15);
    pilaEnteros.push(18);
    cout << "Elemento hasta arriba: " << pilaEnteros.top() << endl;
    pilaEnteros.pop();
    cout << "Elemento hasta arriba luego del pop: "<<pilaEnteros.top()<<endl;
    
	//strings
	Pila<string> pilaStrings;
    pilaStrings.push("fisica");
    pilaStrings.push("Baile");
    pilaStrings.push("Humanitario");
    cout << "Elemento hasta arriba: " << pilaStrings.top() << endl;
    pilaStrings.pop();
    cout << "Elemento hasta arriba luego del pop: "<<pilaStrings.top()<<endl;
    
	//flotantes
	Pila<float> pilaFlotantes;
    pilaFlotantes.push(3.14);
    pilaFlotantes.push(2.60);
    pilaFlotantes.push(7.15);
    cout << "Elemento hasta arriba: " << pilaFlotantes.top() << endl;
    cout << "Elemento hasta arriba luego del pop: "<<pilaFlotantes.top()<<endl;
    
	//TDA
	Pila<Alumno> pilaAlumno;
    pilaAlumno.push(Alumno("Brenda", 17));
    pilaAlumno.push(Alumno("Alejandro", 25));
    pilaAlumno.push(Alumno("David", 40));
    cout << "Elemento hasta arriba: " << pilaAlumno.top() << endl;
    pilaAlumno.pop();
    cout << "Elemento hasta arriba luego del pop: "<<pilaAlumno.top()<<endl;
}
