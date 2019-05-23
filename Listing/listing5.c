#include <stdio.h>

float celsius(float fahr); //preporcessor / function

int main(int argc, const char *argv[]){
	float k[] = {400,300,200,100,50,0};

	for(int i = 0; i < sizeof(k)/sizeof(int); i++){
		printf("%.2fC\t= %.2f F\n", k[i], celsius(k[i]));
	}//calling the method/function/preporcessor
	return 0;
}

float celsius(float fahr){
	//pass floats into your equation to avoid 5/9 = 0;
	// (5.0/9.0) = some float value
	return (5.0/9.0)*(fahr - 32.0);
}
