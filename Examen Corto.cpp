//ALAN STEVE CHALÍ GAITÁN 7691-21-2892
#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

void polindroma();
int main(){
	polindroma();	
	
	
	system("pause");
	return 0;
}
void polindroma(){
	ofstream archivo;
	ofstream archivo2;
	archivo.open("Entrada.txt",ios::out);
	archivo2.open("Salida.txt",ios::out);
	if(archivo.fail()){
		cout<<"no se pudo abrir el documento";
		exit(1);
	}
	string palabra;
	string palabraresultante;
	int i = 0;
	cout<<"Ingrese la palabra a verificar: ";
	cin>>palabra;
	cout<<palabra[0];
	for (i = palabra.size() - 1; i>=0; i--){
		palabraresultante += palabra[i];
	}
	
	if (palabra == palabraresultante){
		archivo<<"La palabra "<< palabra <<" es palindroma";
	} else {
		archivo2<<"La palabra "<< palabra <<" no es palindroma";
	}	
	archivo.close();
	archivo2.close();
}
