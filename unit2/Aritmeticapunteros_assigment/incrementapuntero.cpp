#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
   int  var[MAX] = {11, 21, 31};
   int  *ptr;
   ptr = var;
   for (int i = 0; i < MAX; i++)
   {
      cout << "Direccion de la variable en la memoria[" << i << "] = ";
      cout << ptr << endl;

      cout << "Valor de la variable[" << i << "] = ";
      cout << *ptr << endl;
      ptr++;
   }
   return 0;
}