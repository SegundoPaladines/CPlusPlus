#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
  int tamano=0;
  cout << "Introduzca El Numero De Datos a Ingresar " << endl;
  cin >>tamano;
  int vector_entrada[tamano];
	int vector_aux[tamano];
  cout << "Introduzca los ["<<tamano<<"]digitos " << endl;
  for (int i = 0 ; i < sizeof(vector_entrada)/sizeof(int); i++)
        {
      cout << " Introduzca nuevo valor para arregloEntero["<<i<<"]" << endl;
      cin >> vector_entrada[i];
    }
    for(int i=0; i<sizeof(vector_entrada)/sizeof(int); i++){
    	
    	if(vector_entrada[i]%2==0){
    		vector_entrada[i]=0;
		}
	}
	int contador=0;
	for(int i=0;i< sizeof(vector_entrada)/sizeof(int); i++){
		if(vector_entrada[i]!=0){	
			vector_aux[contador]=vector_entrada[i];
			contador=contador+1;	
		}
	}
	for(int i=0;i< sizeof(vector_entrada)/sizeof(int); i++){
		vector_entrada[i]=vector_aux[i];
	}
    ofstream outFile;
    outFile.open("resultado.txt");
  cout << "Resultado guardado en resultado.txt " << endl;
  for (int i = 0 ; i<contador; i++){
    outFile<<vector_entrada[i]<<endl;
    cout<< "Numero: "<<vector_entrada[i]<<endl;
	}
    outFile.close();


  return 0;
}
