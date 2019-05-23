#include <stdio.h>

int main(void){
	int i = 0;
	char *str  = "Hello world!\n";
	
	/*Loop until null = '\0'*/
	while(str[i] != '\0'){
		printf("%c", str[i]);
		i++;
	}

	return 0;
}
