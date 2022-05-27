/*
	Realice un programa que defina dos vectores de chars y 
	despues almacene el contenido de ambos vectores en un nuevo vector,
	situando en primer lugar los delementos del primer vector seguido por
	los elementos del segundo vector. 
	Muestre el contenido del nuevo vector en la salida estandar
	
	*/
	
#include<iostream>
#include<stdio.h>

using namespace std;

int main (){
	char letra1[] = {'a', 'b', 'c','d', 'e', 'f'};
	char letra2[] = {'g', 'h', 'i','j', 'k', 'l'};
	char letra3[12];
	
	//copying the elements of letras1 and letras2-->letras3
	
		for(int i=0; i<6; i++){
			letra3[i] = letra1[i];
		}
		
		for(int i=6; i<12; i++){
			letra3[i] =letra2[i-6];
		}
	//showing th letras3 array
	
		for(int i=0; i<12; i++){
			cout<<letra3[i]<<endl;
		}
	
	
	return 0;
}