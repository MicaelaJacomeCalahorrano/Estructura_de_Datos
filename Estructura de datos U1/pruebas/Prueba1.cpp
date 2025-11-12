#include <iostream>
#include <string>
#include <vector>

typedef std::string CodigodeCurso;
typedef std::string NombredeMateria;

class Curso {
	private:
		CodigodeCurso codigo;
		NombredeMateria materia;
	public:
		
		Curso(const CodigodeCurso& c, const NombredeMateria& m) : codigo(c), materia(m) {};
		
		void imprimir ()
		{
			std::cout<<"El código es: "<< codigo << " y la materia es: "<< materia << std::endl;
		}
		
		void capturar()
		{
			std::cout<<"Ingrese el código del curso: "<<std::endl;
			std::cin>>codigo;
			std::cout<<"Ingrese el nombre de la materia: "<<std::endl;
			std::cin.ignore();
			std::getline (std::cin, materia);
		}
		
		bool esValido() 
		{
		    return !codigo.empty() && !materia.empty();
		}
		
		
		bool operator!=(const Curso& otro) const 
		{
		    return (codigo != otro.codigo) || (materia != otro.materia);
		}
		
		friend std::ostream& operator<<(std:: ostream& os, const Curso p)
		{
			return os<<"[Codigo de la materia: "<< p.codigo << ". Nombre de la materia> "<< p.materia<< "]"<< std::endl;
		}
};

template <typename T>
class Coleccion {
	private:
		std::vector<T> cursos;
	public: 
	
	void insertar(const T& curso)
	{
		cursos.push_back(curso);
	}
	
	void quitar(int indice) {
    if (indice >= 0 && indice < cursos.size()) 
		{
        cursos.erase(cursos.begin() + indice);
    	}
	}
	void listar() 
	{
	    std::cout << "Lista" << std::endl;
	    for (size_t i = 0; i < cursos.size(); i++) {
	        std::cout << i + 1 << ". " << cursos[i] << std::endl;
	    }
	}
	size_t tamano() const {
	    return cursos.size();
	}
	    
	    
	T& operator[](int indice) {
	    return cursos[indice];
	}
	    
	const T& operator[](int indice) const {
	        return cursos[indice];
	    }
};

int main ()
{
	Coleccion<Curso> colecciondeCursos;
	
	Curso curso1 ("C101", "Calculo");
	Curso curso2 ("C102", "Fisica");
	
	std::cout<<"Los curso1 es valido?: " << (curso1.esValido() ? "Es valido":"No es valido")<<std::endl;
	std::cout<<"Los curso2 es valido?: " << (curso2.esValido() ? "Es valido":"No es valido")<<std::endl;
	
	colecciondeCursos.insertar(curso1);
    colecciondeCursos.insertar(curso2);
    
    std::cout<<"Mostrar con la sobrecarga de operadores"<<std::endl;
    std::cout<<curso1<<std::endl;
    std::cout<<curso2<<std::endl;
    
    std::cout<<"Listado"<<std::endl;
    colecciondeCursos.listar();
    
    std::cout<<"Comparando con el boolean"<<std::endl;
    std::cout<<(curso1 != curso2 ? "Son diferentes" : "Son iguales") << std::endl;
    
    return 0;
}
