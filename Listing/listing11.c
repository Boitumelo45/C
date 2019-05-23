#include <stdio.h>

enum {a=1, b=0};

int main(void){

	int count = 10;
	while(count > 4){	//true
		printf("count\t=%d\n", count--);
	}
	return 0;
}
