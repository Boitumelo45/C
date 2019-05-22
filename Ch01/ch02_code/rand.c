#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

int main(int argc, const char *argv[]){

  for(int i = 0; i < SIZE; ++i){
    if((rand()) > 212e7){
      printf("[%d] %d, %d\n", i, rand(), rand()%SIZE);
    }
  }

  return 0;
}
