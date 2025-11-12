#include <iostream>
#include <string>
using namespace std;

//Definicion dealias con typedef
typedef unsigned int CodigoProducto;
typedef string NombreProducto;
typedef string Categoria;
typedef float Precio;
typedef unsigned int Cantidad;

//Definicion del TDA producto
struct Producto {
	CodigoProducto codigo;
	NombreProducto nombre;
	Categoria categoria;
	Precio precio;
	Cantidad stock;
};

//Funci[on para mostrar informaci[on de un producto
void mostrarProducto(const Producto& p){
	cout << "Codigo: "<<p.codigo<<endl;
	cout << "Nombre: "<<p.nombre<<endl;
	cout << "Categoria: "<<p.categoria<<endl;
	cout << "Precio: $"<<p.precio<<endl;
	cout << "Stock: "<<p.stock<<endl;
}

int main(){
	Producto prod1 = {1001, "Laptop Lenovo", "Computadoras", 749.99, 25};
	mostrarProducto(prod1);
	return 0;
}
