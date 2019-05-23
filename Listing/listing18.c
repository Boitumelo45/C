#include <stdio.h>
#include <string.h>

int isPalindrome(char *str);

int main(void){
	
	char word[100];
	printf("Enter a palindrome word: ");
	gets(word);
	while(strlen(word) > 0){ 
		if(isPalindrome(word) == 1){
			printf("The word is a palindrome!\n");
		}else{
			printf("The word is not a palindrome.\n");
		}
		printf("Enter a palindrome word: ");
		gets(word);
	}
	return 0;
}

int isPalindrome(char *str){
	
	int length = strlen(str);
	int count = 0;

	while(count < length){
		if(str[(length - 1) - count] != str[count]){
			return -1;
		}
		count++;
	}
	return 1;
}
