#include <iostream>
using namespace std;

int array [10];

int main(){
for (int i = 0; i < 10; i++){
cout << "Inserte el numero " << i + 1<< ":" << endl;
cin >> array[i];
}
cout <<"Numero 1: "<< array[0] << endl;
cout <<"Numero 2: "<< array[4] << endl;
cout << "Numero 3: " << array [9] << endl;

return 0;
}
