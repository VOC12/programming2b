#include<stdio.h>

using namespace std; //se debe declararar al principio para ya no tener que repetirlo

int main(){
int x,y = 1;

x = (y < 10) ? 30 : 40; // if X<Y print 30, if not print 40

cout<< "value of x: " << x << endl;

return 0;
}
