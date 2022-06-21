#include <iostream>

using namespace std;
const int MAX = 3;

int main ()
{
   int  var[MAX] = {5, 6, 7};
   int  *ptr;
   ptr = &var[MAX-1];
   for (int i = MAX; i > 0; i--)
   {
      cout << "Dirección de la variable en la memoria[" << i << "] = ";
      cout << ptr << endl;

      cout << "Valor de la variable[" << i << "] = ";
      cout << *ptr << endl;
      ptr--;
   }
   return 0;
}