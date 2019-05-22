#include <stdio.h>
#include <stdlib.h> //rand()
#include <string.h> //memset()
#define SIZE 1000
enum{
  VAL1='a', VAL2='b', VAL3='z'
};

int main(int argc, char *argv[]){

  char a[SIZE], b[SIZE];
  int i, j;

  /* Initialise arrays so they are different from each other */
  memset(a, VAL1, SIZE);
  memset(b, VAL2, SIZE);

  /*Get size of array*/
  printf("size of a = %lu, b = %lu\n", sizeof(a)/sizeof(int), sizeof(b)/sizeof(int));


  /* Set a random element in each array to VALUE */
  a[rand()%SIZE] = VAL3;
  b[rand()%SIZE] = VAL3;
  printf("Random number: %d\n", rand()%SIZE);

  /* Search for location of common elements */
  for(i = 0; i < SIZE; ++i){
    for(j = 0; j < SIZE; ++j){
      if (a[i] == b[j]){
        goto found;
      }
    }
  }

  /* Error: match not found */
  printf("Did not find any common elements!!\n");
  return 0;

found: /*Results on success*/
      printf("a[%d] = %c, b[%d] = %c\n", i, a[i], j, b[j]);

}
