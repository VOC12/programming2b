/*
                        PUNTEROS --- POINTERS
                        Variable y elace que:
            -Almacemna la direccion de memoria de un objeto
            -Para asignar nuevos objetos en un array
            -Para pasar funciones a otras funciones
            -Parsa iterar los elementos de matrices u estructura de datos


                            ESTRUCTURA DE UN PUNTERO
*/

#include<iostream>

using namespace std;

int main(int *apuntador){
    

    int variable; //crea un entero
    int *apuntador = &variable; // crear apuntador en la dirección de variable =&
    *apuntador = 20; // le asignamos un valor a esa posicion de memoria
    
    delete[] apuntador; // despues de operar conjuntos es necesario liberar la memoria
    apuntador = NULL; // el puntero tendrá un valor nulo, se libera el valor
    

/*---------------------------------------------------------------------------------------------------*/

// OTTRO APUNTADOR 

    char *apuntador = NULL; //declarando el puntero
                            // es recomendable iniciar el puntero en null para dectectar errores facilmente

    char letra; // declaramos una variable

    apuntador = &letra //asignamos el apuntador a la direccion de memoria

    *apuntador = 'X'; //modificando y utilizando la estrucutra del apuntador

    cout<< letra; 

}


