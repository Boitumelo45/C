#include <stdio.h>
#include <string.h>	//use strlen()

int main(void){
	
	char *str = "Hello world\n";
	int length = strlen(str); //11
	
	for(int i = 0; i < length; i++){
		printf("%c", str[i]);
	}

	return 0;
}
