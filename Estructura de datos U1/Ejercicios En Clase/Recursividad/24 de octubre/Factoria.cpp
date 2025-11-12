#include <iostream>

using namespace std;

class Factorial{
public:
int factorial (int n)
	{
		if (n==0)
		{
			return 1;
		}
		else
		{
			return n * factorial (n-1);
		}
	}
};

int main()
{
	Factorial fac;
	int n =3;
	int resultado = fac.factorial(n);
	cout<<"El numero es: "<<n<<" y el factorial es:"<<resultado<<endl;
	return 0;
}
