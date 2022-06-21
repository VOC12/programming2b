#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
   int  var[MAX] = {1, 2, 3};
   int  *ptr;
   ptr = var;
   int i = 0;
   while ( ptr <= &var[MAX - 1] )
   {
      cout << "Dirección de la variable en la memoria[" << i << "] = ";
      cout << ptr << endl;

      cout << "Valor de la variable[" << i << "] = ";
      cout << *ptr << endl;
      ptr++;
      i++;
   }
   return 0;
}