#include <iostream>

using namespace std;

struct nodo{
	int info;
	nodo *sig;
}*pri,*nue,*aux;	

void inicio(){
	pri=NULL;
}

void ingresar(){
	

	if(pri==NULL){
		pri = new nodo();
		cout << "Primer Dato:";
		cin >> pri->info;	
		pri->sig=NULL;
	}else{
		nue = new nodo();
		cout << "Nuevo Dato:";
		cin >> nue->info;	
		nue->sig=pri;
		pri=nue;
	}
}
void imprimir(){

	if(pri==NULL){
		cout << "Pila Vacia";
	}else{
		
		system("cls");
		cout <<"\n Datos De La Pila: ";
		aux=pri;
		while(aux!=NULL){
			cout <<"\n Informacion: " << aux->info << endl;
			aux=aux->sig;
		}
		
	}

}
void sacar(){
	if(pri==NULL){
		cout << "Pila Vacia";
	}else{
		
		aux=pri;
		cout <<"\n Sale: " << aux->info << endl;
		pri=pri->sig;
		
		delete aux;
		
	}
}
void liberar(){
	
	if(pri==NULL){
		cout << "Pila Vacia";
	}else{
		
		aux=pri;
		while(aux!=NULL){
			cout <<"\n Sale: " << aux->info << endl;
			pri=pri->sig;
			delete aux;
			aux=pri;
		}
	}

}

void menu()
{
	int op;
	do{
		do{
			system ("cls");
			cout << "Opciones\n"
				 << "1. Inicio\n"
				 << "2. Ingresar\n"
				 << "3. Listar\n"
				 << "4. Sacar\n"
				 << "5. Liberar\n"
				 << "9. Salir\n"	 
				 << "No de opción?: ";
		    cin >>op;
		}while (op <1 || op >9);
		switch (op)
		{
			case 1:
				inicio();
				system ("pause");
				break;
			case 2:
				ingresar();
				system ("pause");
				break;
			case 3:
				imprimir();
				system ("pause");
				break;
			case 4:
				sacar();
				system ("pause");
				break;
			case 5:
				liberar();
				system ("pause");
				break;
		}
	}while (op!= 9);	
}



int main(int argc, char** argv) {
	menu();
	return 0;
}

