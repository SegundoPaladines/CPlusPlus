#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	// definir un TDA NUEVO
	
	struct fechaNacimiento{
		int dia;
		int mes;
		int anyo;
	};
		
	struct datosPersona{
		string nombre;
		int edad;
		float nota;	
		fechaNacimiento fecha;	
	};
	
	

	
	int i,max;
	
	cout << "Numero de personas:";
	cin >> max;
	
	//Definir un arreglo dinámico con el TDA 
		
	datosPersona *persona = new datosPersona[max];
		
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
		cout << "Fecha Nacimiento: (dia/mes/año)";
		cout << "\nDia: ";
		cin >> persona[i].fecha.dia;
		cout << "\nMes: ";
		cin >> persona[i].fecha.mes;
		cout << "\nAño: ";
		cin >> persona[i].fecha.anyo;		
	}
		
	// listar
	system("cls");
	cout << "\nDatos personales:\n";
		for(i=0; i<max;i++){
		cout << "Nombre: " << persona[i].nombre <<endl;
		cout << "Edad: " << persona[i].edad << endl;
		cout << "Nota: " << persona[i].nota <<endl;
		cout << "Fecha Nacimiento: (dia/mes/año): ";
		cout << persona[i].fecha.dia << "/"
			 << persona[i].fecha.mes << "/"
			 << persona[i].fecha.anyo << endl;
	}
    system("pause");
	return 0;
}
