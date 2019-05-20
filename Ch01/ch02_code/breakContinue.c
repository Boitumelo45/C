#include <stdio.h>

int main(){

  int n = 2;


  for(int i = 0; i < n * 20; i++){
    if (n == 10){
        break;
    }else{
      continue;
    }
  }


  return 0;
}
