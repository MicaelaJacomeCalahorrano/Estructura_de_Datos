#include <iostream>

using namespace std;

class SumaRecursiva{
public:
int suma (int n)
	{
		if (n==1)
		{
			return 1;
		}
		else
		{
			return n + suma (n-1);
		}
	}
};

int main()
{
	SumaRecursiva sumando;
	int n =5;
	int resultado = sumando.suma(n);
	cout<<"Los numeros son: "<<n<<" y la suma es:"<<resultado<<endl;
	return 0;
}
