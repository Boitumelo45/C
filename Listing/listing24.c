#include <stdio.h>

//name hiding
int modify(int, int);

//external variables
int x = 23, y = 77;

int main(void){	
	x =  modify(x,y);	
	printf("x = %d\n", x);
	return 0;
}

int modify(int a, int b){
	return (a+b);
}
