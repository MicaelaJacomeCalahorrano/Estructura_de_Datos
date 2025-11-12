#include <iostream>
#include <string>

using namespace std;

struct Cancion
	{
		string nombre;
		Cancion* siguiente;
		Cancion* atras;
		
		Cancion(string nombre): nombre(nombre), siguiente(nullptr), atras(nullptr) {}		
	};
	
class ListaCircularDoble //para que avance y regrese?
{
	private:
		Cancion* primera;
		Cancion* actual;
		int cantidadDeCanciones;	
	public:
		ListaCircularDoble(): primera(nullptr), actual (nullptr), cantidadDeCanciones (0) {};
		
		void insertarCancion (string nombre)
		{
			 Cancion* nuevaCancion = new Cancion(nombre);
			
			if if (primera == nullptr) { 
			primera = nuevaCancion;
            primera->siguiente = primera;
            primera->atras = primera;
            actual = primera;
			} else {
            Cancion* ultima = primera->atras;
            
            ultima->siguiente = nuevaCancion;
            nuevaCancion->atras = ultima;
            nuevaCancion->siguiente = primera;
            primera->atras = nuevaCancion;
        	}
        	
        	cantidad++;
        	cout << "La cancion '" << nombre << " se agrego correctamente"<<endl;
    	}
    	
    	void eliminarCancion(string nombre)
    	{
    		actual = actual->siguiente;
    		
    		cout<<"La cancion "<< nombre <<"se elimino correctamente"<<endl;
		}
		
		void reproducirCancionActual() {
	        cout << "Reproduciendo: " << actual->nombre << "\n";
		}
	    
	    void siguiente() {
	        actual = actual->siguiente;
	        reproducirCancionActual();
	    }
	    
	    void anterior() {
	        actual = actual->anterior;
	        reproducirCancionActual();
	    }
	    
	    void Menu()
	    {
	    	
	    		cout<<"Menu"<<endl;
	    		cout<<"1. Insertar Cancion"<<endl;
	    		cout<<"2. Cancion Actual"<<enld;
	    		cout<<"3. Siguiente Cancion"<<endl;
	    		cout<<"4. Regresar Cancion"<<endl;
	    		cout<<"5. Eliminar Cancion"<<endl;
	    		cout<<"6. Salir"<<endl;
	    		cout<<"Escoja opcion: ";
	    		cin>>opcion;
		}
};

int main()
{
	
	{
	    	ListaCircularDoble reproductor;
	    	int opcion;
	    	string nombre;
	    	
	    	do {
	    		
	    		Menu();
	    		
		    	switch (opcion)
		    	{
		    		case 1:
		    			cout << "Ingrese el nombre de la cancion: ";
		                getline(cin, nombre);
		                reproductor.insertarCancion(nombre);
		                break;
		                
		            case 2:
		            	reproductor.reproducirActual();
                		break;
                	
                	case 3:
                		reproductor.siguiente();
                		break;
                	
                	case 4:
                		reproductor.anterior();
                		break;
                		
                	case 5:
                		cout << "Nombre de la cancion: ";
                		getline(cin, nombre);
                		reproductor.eliminarCancion();
                		break;
                	
                	case 6:
                		cout<<"saliendo"<<endl;
                		
                	default:
                		cout<<"No valido"<< endl;
                
				}
			} while (opcion != 6)
		}
	return 0;
}
