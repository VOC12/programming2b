#include<stdio.h>
#include<iostream>

using namespace std;

int function(int valor){
    valor = valor + 10; // se le suma
    return valor;
}

int functionPunteros(int* valor){
    *valor = *valor + 10; // se le suma 10 a la posicion de memoria
    return *valor;
}

int main(){
    int numero = 10;
    cout<<"Antes de funcion"<<numero<<"\n"; //imprime 10

    function(numero); //pasar variable numero a funcion

    system("pause");

    return 0;

}