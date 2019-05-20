/*
* Author: Boitumelo Phetla
* How to compile on Terminal
* gcc -Wall -o program program.c
* ./program
*/
#include <stdio.h>

int main(void){
	int num = 0;	//initialization

	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Number: %d\n", num);
	return(0);
	}
