#include <stdio.h>

void num(int age);

int main(void){

  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  num(age);

  return 0;
}

void num(int age){
  if (age >= 18){
    printf("Welcome.\n");
  }else{
    printf("Sorry, you are under age.\n");
  }
}
