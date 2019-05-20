/*
* Author: Boitumelo Phetla
* How to compile on Terminal	
* gcc -Wall -o hello_world hello_world.c
*/

#include "squareFn.h"
#include <stdio.h>

int main(void){
	int a = square(4);
	printf("a^2 = %d\n", a);
    return(0);
}
