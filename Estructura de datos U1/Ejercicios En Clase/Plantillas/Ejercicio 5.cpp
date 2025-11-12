/*INTEGRANTES:
Michael Chicaiza
Jorge Fuentes
Micaela Jácome
Mateo Rogerón
*/

#include <iostream>
#include <string>

using namespace std;

//plantilla de función
template <typename T>
T minimo(T a, T b) 
{
	return (a < b) ? a : b;
}

int main () 
{
	int i1 = 25, i2 = -1;
	float f1 = 3.14, f2 = 8.56;
	char c1 = 'D', c2 = 'A';
	string s1 = "Hola", s2 = "Hi";
	
	cout<<"Entre los enteros "<< i1<< " y "<<i2<<" es: "<<minimo(i1, i2)<<endl;
	cout<<"Entre los flotantes "<< f1<< " y "<<f2<<" es: "<<minimo(f1, f2)<<endl;
	cout<<"Entre los caracteres "<< c1<< " y "<<c2<<" es: "<<minimo(c1, c2)<<endl;
	cout<<"Entre las cadenas "<< s1<< " y "<<s2<<" es: "<<minimo(s1, s2)<<endl;
}
