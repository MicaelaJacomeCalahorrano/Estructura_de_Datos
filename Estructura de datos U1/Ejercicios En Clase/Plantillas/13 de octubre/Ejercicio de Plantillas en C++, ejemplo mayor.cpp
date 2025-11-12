#include <iostream>

using namespace std;

//Plantilla generica para obtener el mayor valor
template<typename T>
T mayor(T a, T b){
	return (a > b) ? a : b;
}

int main()
{
	float precio1 = 15.75f;
	float precio2 = 20.50f;
	unsigned int stock1 = 30;
	unsigned int stock2 = 45;
	
	cout << "Precio Mayor: " << mayor(precio1, precio2)<<endl;
	cout << "Stock Mayor: " <<mayor (stock1, stock2)<< endl;
	
	return 0;
}
