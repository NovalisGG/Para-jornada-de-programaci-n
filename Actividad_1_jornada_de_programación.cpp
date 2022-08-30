#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de funcion
void pedir_datos();
void vector_mayor(int vec[], int);
void vector_menor(int vec[], int);
void mostrar_mayorYmenor();

//Variables globales
int vector[100], tamano,menor = 0, mayor = 0;

int main(){
	pedir_datos();
	vector_mayor(vector, tamano);
	vector_menor(vector, tamano);
	mostrar_mayorYmenor();
	
	
	
	
	getch();
	return 0;
}

void pedir_datos(){
	cout<<"Digite la cantidad de elementos del vector: ";
	cin>>tamano;
	
	for(int i=0;i<tamano;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vector[i];
	}
}

void vector_mayor(int vec[], int tam){
	for(int i=0;i<tam;i++){
		if(vec[i] > mayor){
			mayor = vec[i];
		}
	}
}

void vector_menor(int vec[], int tam){
	menor = vec[0];
	
	for(int i=0;i<tam;i++){
		if(vec[i] < menor){
			menor = vec[i];
		}
	}
}

void mostrar_mayorYmenor(){
	cout<<"\nEl elemento de mayor valor es: "<<mayor;
	cout<<"\nEl elemento de menor valor es: "<<menor<<endl;
	
}