/* Linear search, buscar una variable
  dentro de un array */
  
#include<stdio.h>
findelement(int arr[], int key, int size){
	//loop to transverse and search for key
	for(int i=0; i<size; i++){
		if(arr[i]==key){
			printf("Tha position is: %d", i+1); //print position
			break;
		}
	}
}

int main(){
	int arr[] = {3,2,3,4,7,8}; //declare array
	int n = 6; //number of elements
	int key = 8; //key to be found
	
	findelement(arr, key, n);
}
