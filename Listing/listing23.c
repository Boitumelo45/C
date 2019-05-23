#include <stdio.h>
#include <stdlib.h>
#include "listing23_1.c"

extern double number;

int main(){
	printf("External variable (listing23_1.c): %.2f\n", number);
	return 0;
}

