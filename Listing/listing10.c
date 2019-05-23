#include <stdio.h>

//symbolic constants
enum {
	JAN=1, FEB, MAR, APR, MAY, JUN,
	JUL, AUG, SEP, OCT, NOV, DEC=12
}; /*
	enum assumes int by default
	enum increments variables/symbols by 1
	*/

int main(int argc, const char *argv[]){
	
	int x = MAR + NOV; 
	printf("x = %d\n", x);
	return 0;
}
