#include <stdio.h>

int main(void){

	int value[] = {10, 12, 13}; //initialize array arr[]

	int SIZE  = sizeof(value)/sizeof(int); //array length
	int count = 0;

	while(count < SIZE){
		switch(value[count]){
			case 10:
				printf("TEN!\n");
				break;
			case 12:
				printf("TWELVE!!\n");
				break;
			case 13:
				printf("13!!\n");
				break;
			default:
				printf("Nothing matched\n");
				break;
			}
		count++;
	}
	
	return 0;
}
