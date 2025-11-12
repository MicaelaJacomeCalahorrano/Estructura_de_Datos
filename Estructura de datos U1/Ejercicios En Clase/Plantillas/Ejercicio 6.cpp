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
class Caja 
{
	private:
		T tipo_de_dato;
	public:
		Caja (){}
		
		void guardar(T tipo) {
			tipo_de_dato = tipo;
		}
		
		T obtener(){
			return tipo_de_dato;
		}
		
		void mostrar (){
			cout << "Se muestra: "<<tipo_de_dato<<endl;
		}
};

class Alumno
{
	private:
		string nombre;
		int edad;
	public:
		Alumno(string N ="", int E=0) : nombre(N), edad(E) {}
		friend ostream& operator<<(ostream& os, const Alumno& a) {
			os << "Alumno: " << a.nombre << ", Edad: " << a.edad;
			return os;
		}
};

int main ()
{
	//enteros
	Caja<int> cajaEnteros;
	cajaEnteros.guardar(5);
	cout <<"Se obtiene en enteros: "<<cajaEnteros.obtener()<<endl;
	cajaEnteros.mostrar();
	
	//string
	Caja<string> cajaStrings;
	cajaStrings.guardar("Plantillas");
	cout <<"Se obtiene en Strings: "<<cajaStrings.obtener()<<endl;
	cajaStrings.mostrar();
	
	//float
	Caja<float> cajaFlotantes;
	cajaFlotantes.guardar(5.67);
	cout <<"Se obtiene en Flotantes: "<<cajaFlotantes.obtener()<<endl;
	cajaFlotantes.mostrar();
	
	//TDA
	Caja<Alumno> cajaAlumno;
	cajaAlumno.guardar(Alumno("Juan", 18));
	cout <<"Se obtiene en TDA: "<<cajaAlumno.obtener()<<endl;
	cajaAlumno.mostrar();
}
