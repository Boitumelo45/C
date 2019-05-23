#include <stdio.h>
#include <math.h> 

double number = 3.1415; 
float fn(int value);

int main(){
	printf("X = %.2f\n", fn(number));	
	return 0;
}

float fn(int value){
	return pow(value, 8);
}
