#include <stdio.h>

int main(int argc, const char *argv[]){

	int a = 10, b = a * 2;

	//remove if stament change while logic to b >= a	
	while(b > a){
		if((b - 1) == a){
			printf("b (%d) = a (%d)\n", b-1, a);
		}
		b--; //decrement
	}
	
	return 0;
}
