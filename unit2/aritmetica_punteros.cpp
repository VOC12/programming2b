/*

                                ARITMETICA DE PUNTEROS
                Si sumar o restar con punteros es permitido y en caso de ser 
                posible, explicar como se hace. Ejemplo o ejercicio.
                Se escojerá aleatoriamente la prox clase



                                ARITMETICA DE PUNTEROS
A un puntero se le puede aplicar cualquier clase de operación de suma o resta (incluyendo los incrementos y decrementos). 
El lenguaje C permite sumar o restar cantidades enteras al puntero, para que apunte a una dirección diferente es decir,
que la expresión sumada NO es el número de bytes que se suman a la dirección, es el número de elementos del tipo al que 
apunta el puntero:

        -Incrementar un puntero
El siguiente programa incrementa el puntero de la variable secuencialmente acceso cada elemento de la matriz:

#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
   int  var[MAX] = {10, 100, 200};
   int  *ptr;
   ptr = var;
   for (int i = 0; i < MAX; i++)
   {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;
      ptr++;
   }
   return 0;
}

    -Disminuir un puntero
De manera similar, el puntero se decrementa y restando el número de bytes que es el valor de su tipo de datos, 
como sigue:

#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
   int  var[MAX] = {10, 100, 200};
   int  *ptr;
   ptr = &var[MAX-1];
   for (int i = MAX; i > 0; i--)
   {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;
      ptr--;
   }
   return 0;
}

    -Comparar puntero
Puntero se puede utilizar para comparar la relación entre los operadores, como ==, <y>. Si p1 y p2 puntos 
a dos variables relacionadas, como con una serie de elementos diferentes, que pueden ser del tamaño de p1 y p2 comparación.

El siguiente procedimiento modifica el ejemplo anterior, siempre que 
la dirección del último elemento de un puntero variable es la dirección 
de la matriz es menor que o igual a & var [MAX - 1], poner la variable 
de puntero se incrementa:

#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
   int  var[MAX] = {10, 100, 200};
   int  *ptr;
   ptr = var;
   int i = 0;
   while ( ptr <= &var[MAX - 1] )
   {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;
      ptr++;
      i++;
   }
   return 0;
}

*/
