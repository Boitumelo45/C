#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]){
	
	FILE *pfile = fopen("listing21.txt", "r");
	
	if(pfile == NULL){
		exit(1);
	}

	return 0;
}
