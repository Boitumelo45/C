#include <stdio.h>

int main(){
  int c;
  c = getchar();
  while(c != EOF){  //ctrl + D or Z 
    putchar(c);
    c = getchar();
  }

  return 0;
}
