#include <stdio.h>

int main(void){

  int start = 0, stop = 100, stride = 10;
  int count = 0;
  while(start <= stop){
    printf("%d\t:\t%d\n", count, start);
    count+=1;
    start+=stride;
  }
  return 0;
}
