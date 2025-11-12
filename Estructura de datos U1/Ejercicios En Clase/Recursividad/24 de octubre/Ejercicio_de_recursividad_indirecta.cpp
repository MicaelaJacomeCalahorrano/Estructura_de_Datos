#include <iostream>

using namespace std;

class SecuenciaParImpar{
	public:
		void generarSecuencia(int n)
		{
			cout << n << " "; 
			
			if (n == 1){  
				return;
			}
			
			if (n % 2 == 0){
				generarSecuencia(n/2); 
			}else {
				generarSecuencia(3*n+1);  
			}
		}
};

int main()
{
	SecuenciaParImpar spi;
	cout<< "Secuencia para 7: "<<endl;
	spi.generarSecuencia(7);
	cout<<endl;
	return 0;
}
