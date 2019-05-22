#include <stdio.h>
#include <string.h>

int palindrome(char *str);

int main(int argc, const char *argv[]){

  char word[100];
  printf("Enter a word: ");
  gets(word);

  int result = palindrome(word);

  if (result > 0){
    printf("The word is a palindrome!!\n");
  }else{
    printf("The word is not a palindrome.\n");
  }
  return 0;
}

int palindrome(char *str){

  int size = strlen(str); //string length

  for(int i = 0; i < size; i++){
    if(str[(size-1) - i] != str[i]){
        return -1;  //return false
    }else{
        continue; //do not break until '\0'
    }
  }
  return 1; //return true
}
