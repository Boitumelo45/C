#include <stdio.h>
#include <math.h>
#define PI 3.1415	//define a constant value

float area(float radius);	//preprocessor

int main(int argc, const char *argv[]){
	
	float r = 2.14;
	
	printf("Area(%f) = %.2f m^2\n", r, area(r));
	
	return 0;
}

float area(float radius){
	return pow(PI,2)*radius;
}
