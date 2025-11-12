#include <iostream>

using namespace std;

class Potenciacion{
public:
int potencia (int base, int exponente)
	{
		if (exponente==0)
		{
			return 1;
		}
		else
		{
			return base * potencia(base, exponente -1);
		}
	}
};

int main()
{
	Potenciacion potencia_numero;
	int base, exponente;
	cout<<"Ingrese base: ";
	cin>>base;
	cout<<"Ingrese exponente: ";
	cin>>exponente;
	cout<<"Potencia: "<<potencia_numero.potencia(base, exponente)<<endl;
	return 0;
}
