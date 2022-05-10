#include <stdio.h>
#include <math.h>

				//CALCULATOR CYNTHIA VIDAL//

int result = 1;//declaring a constant
int num, n1, n2; //declaring the 2 variebles
char function; //declaring a kind of operation

int main() {

    printf("Wich function do you want?:"); //ask for a type for calculate
    scanf("%c", &function); //try the function and make the operation

int valido = 1;
switch (function){
        case '+': //sum
       	printf( "\n Put a number:: " );
    	scanf( "%d", &n1 );
    	printf( "\n Put another number: " );
    	scanf( "%d", &n2 );
		printf( "\n The result is: %d", n1 + n2 );;
        break;

	case '-':
        printf( "\n Put a number:: " );
    	scanf( "%d", &n1 );
    	printf( "\n Put another number: " );
    	scanf( "%d", &n2 );
		printf( "\n The result is: %d", n1 - n2 );;
        break;

        case '*':
        printf( "\n Put a number:: " );
    	scanf( "%d", &n1 );
    	printf( "\n Put another number: " );
    	scanf( "%d", &n2 );
		printf( "\n The result is: %d", n1 * n2 );;
        break;

        case '/':
        printf( "\n Put a number:: " );
    	scanf( "%d", &n1 );
    	printf( "\n Put another number: " );
    	scanf( "%d", &n2 );
		printf( "\n The result is: %d", n1 / n2 );;
        break;

    default: valido = 0;
        
    }

return 0;
}
