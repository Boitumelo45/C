#include "celsius.h"
#include <stdio.h>

int main(void){
  float k[] = {100.1, 99.9, 88.8, 77.7, 66.6, 55.5, 44.4, 33.3, 22.2, 11.1, 5.55};
  for(int i = 0; i < sizeof(k)/sizeof(int); i++){
    printf("%.2f k = %.2f C\n", k[i], cTemp(k[i]));
  }
  return 0;
}
