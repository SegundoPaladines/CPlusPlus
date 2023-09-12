#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//#define max 3 //crear la constante de 3 con nombre max

using namespace std;


	struct nodo{
		string nombre;
		int edad;
		float nota;
		nodo* siguiente;
	}*aux;

int main(int argc, char** argv) {

	//definir puntero
	nodo *a = new nodo;
	nodo *b = new nodo;
	nodo *c = new nodo;
	
	
	cout <<"\n\nDatos Personales :\n";
	cout<<"Ingrese Nombre: ";
	cin >> a->nombre;
	cout<<"Ingrese Edad: ";
	cin >> a->edad;
	cout<<"Ingrese Nota: ";
	cin >> a->nota;
	a->siguiente= NULL;
	aux=a;
	
	cout <<"\n\nDatos Personales :\n";
	cout<<"Ingrese Nombre: ";
	cin >> b->nombre;
	cout<<"Ingrese Edad: ";
	cin >> b->edad;
	cout<<"Ingrese Nota: ";
	cin >> b->nota;
	b->siguiente=a;
	aux=b;
	
	cout <<"\n\nDatos Personales :\n";
	cout<<"Ingrese Nombre: ";
	cin >> c->nombre;
	cout<<"Ingrese Edad: ";
	cin >> c->edad;
	cout<<"Ingrese Nota: ";
	cin >> c->nota;
	c->siguiente=b;
	aux=c;
	
	
	
	
	system("cls");
	while(aux!=NULL){
		cout <<"\n\nDatos Personales 1:\n"<< endl;
		cout <<"Nombre: " << aux->nombre<< endl;
		cout <<"Ingrese Edad: "<< aux->edad << endl;
		cout <<"Ingrese Nota: "<< aux->nota<< endl;
		aux=aux->siguiente;
	}
	
	
	
	system("cls");
	while(aux!=NULL){
		cout <<"\n\nDatos Personales 1:\n"<< endl;
		cout <<"Nombre: " << aux->nombre<< endl;
		cout <<"Ingrese Edad: "<< aux->edad << endl;
		cout <<"Ingrese Nota: "<< aux->nota<< endl;
		aux=aux->siguiente;
	}
	system("pause");
	//salida

	return 0;
}
