#include <stdio.h>
#include <stdlib.h>

void score(char language[], int priority);
void bar(char language[], int priority);

int main(int argc, const char *argv[]){
	
	score("Python", 100);
	score("JavaScript", 60);
	score("Nim", 30);
		
	return 0;
}

void score(char language[], int priority){

	switch(priority){
		case 100:
			bar(language, priority);
			break;
		case 60:
			bar(language, priority);
			break;
		case 30:
			bar(language, priority);
			break;
		default:
			printf("Error! invalid input\n");
			break;
			
	}
}

void bar(char language[], int priority){
	for(int i = 0; i < (int)(priority/10); i++){
		printf("::");
	}
	printf("%s\n", language);
}

