#include <iostream>
#define max 3

using namespace std;

int main(int argc, char** argv) {
	// definir un TDA NUEVO
	struct datosPersona{
		string nombre;
		int edad;
		float nota;		
	};
	
	//Definir un arreglo estatico con el TDA 
	//struct datosPersona persona[max];
	
	datosPersona persona[max];
	
	int i;
	
	// asignación
	for(i=0; i<max;i++){
		system ("cls");
		cout << "\nEntrada de datos: \n";
		cout << "Nombre: ";
		cin  >> persona[i].nombre;
		cout << "Edad: ";
		cin >> persona[i].edad;
		cout << "Nota: ";
		cin >> persona[i].nota;
	}
		
	// listar
	system("cls");
	cout << "\nDatos personales:\n";
		for(i=0; i<max;i++){
		cout << "Nombre: " << persona[i].nombre <<endl;
		cout << "Edad: " << persona[i].edad << endl;
		cout << "Nota: " << persona[i].nota <<endl;
	}
    system("pause");
	return 0;
}
