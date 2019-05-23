#include <stdio.h>

int main(void){
	
	int i = 0, c;
	char word[100];
	printf("Enter a word: ");
	while((c = getchar()) != EOF && c != '\n'){
		word[i++] = c;
		if(c == '\n'){
			word[i++] = '\0';
		}
	}	
	printf("==> %s\n", word);
	return 0;
}
