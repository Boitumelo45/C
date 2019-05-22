#include <stdio.h>

int main(int argc, char *argv[]){
	
	int count = 0;
	char *string = "Hello, world!\n";	
	
	/*print each character until we reach \0*/
	while(string[count] != '\0'){
		printf("%c", string[count++]);
	}
	return 0;
}
