/*
Recursión
Find the MCD using recursion (Mayor común divisor)using recursion
*/

#include <stdio.h>
int process (int n1, int n2);


int main(){
int n1, n2;

	printf("Enter two possible integers: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	printf("GCD of %d and %d is %d", &n1, &n2,process(n1,n2));
	return 0;
}

int process(int n1,int n2){
	if(n2 != 0)
		return process(n2, n1 %n2); //El módulo "%" es la division entre 2 numeros e imprime lo que resta
	else
		return n1;

}
