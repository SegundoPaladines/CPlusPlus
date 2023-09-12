#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	// definir un TDA NUEVO
	struct datosPersona{
		string nombre;
		int edad;
		float nota;		
	};
	
	//Definir una variable del tipo TDA 
	//struct datosPersona persona;
	
	datosPersona persona;
	
	// asignación
	persona.nombre = "Pedro";
	persona.edad = 32;
	persona.nota = 4.5;
	
	// listar
	cout << "\nDatos personales:\n"
		 << "Nombre: " << persona.nombre << endl
		 << "Edad: " << persona.edad << endl
		 << "Nota: " <<	persona.nota << endl;
    system("pause");
	return 0;
}
