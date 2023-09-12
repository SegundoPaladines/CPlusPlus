#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	// definir un TDA NUEVO
	struct{
		string nombre;
		int edad;
		float nota;		
	}persona;
	// asignación
	persona.nombre = "Pedro";
	persona.edad = 32;
	persona.nota = 4.5;
	
	// listar
	cout << "\nDatos personales:\n"
		 << "Nombre: " << persona.nombre << endl
		 << "Edad: " << persona.edad << endl
		 << "Nota: " <<	persona.nota;
    system("pause");
	return 0;
}
