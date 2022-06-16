#include<stdio.h>
#include<iostream>
#include "string.h"

using namespace std;

int main(){
    
    string* titulo = NULL; //Se inicializa el puntero en NULL
    string* autores = NULL;

    int size; //inicializar la variable

    cout<<"¿Cuantos libors desea ingresar? \n " ;

    string entrada; // declaro la varible entrada

    getline(cin, entrada); //se asigna el valor ingresado

    size = stoi(entrada); // transformar la entgrada "string" a "entero"
    
    //delcarando un  arreglo del tamaño ingresado para los titulos
    titulo = new string[size];

    //declarando un arreglo del tamaño ingresado para los autores
    autores = new string[size];

    cout<<"Ingrese la infromacion de los libros: \n";
    for (int i = 0; i < size; i++)
    {
        cout<<"\n****** Libro"<< i+1<<"******\n";
        cout<<"Titulo ";
        getline(cin, titulo[i]); // se asigna valor ingresado a la posicion matriz
        cout<<"Autores: ";
        getline(cin, autores[i]);
    }
    

}