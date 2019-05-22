#include <stdio.h>
#include <assert.h>
int factorial(int a);
int main(int argc, const char *argv[]){

  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("factorial(%d) = %d\n", num, factorial(num));
  return 0;
}

int factorial(int a){
    int result = 1;
    assert(a>=0); //check if num is greater than zero
    while(a){
      result *= a;
      a--;
    }

    return result;
}
