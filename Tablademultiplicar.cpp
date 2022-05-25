/* Realice un programa que solicite la entrada estandar de
un numero enhtero del 1 al 10 y mujestre en la salida
su tabla de multiplicar */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num;
	do{
		cout<<"Put a number: "; cin>>num;
	}while((num<1)||(num>10));
	
	for (int i=1; i<=20; i++){
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
