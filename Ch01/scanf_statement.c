/*
* Author: Boitumelo Phetla
* How to compile on Terminal	
* gcc -Wall -o program program.c
* ./program
*/ 
#include <stdio.h>

int main(void){
	char name[32] = "";
	
	printf("What is your name: ");
	scanf("%c", &name);
	printf("Hi, ", name);
	return(0);	
	}
