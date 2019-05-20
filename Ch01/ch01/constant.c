#include <stdio.h>
#include <math.h>

#define C 299792458       //speed of light (m/s)


float e(float m);         //e = mc^2

int main(void){

  //define sentinel as m= -1
  printf("To terminate the programe enter [-1]\n");

  float m = 0.0;

  printf("Enter mass [kg]: ");
  scanf("%f", &m);

  while(m > 0){
      printf("m = %.2f kg, e = %.10e m/s\n", m, e(m));
      printf("To terminate the programe enter [-1]\n");
      printf("Enter mass [kg]: ");
      scanf("%f", &m);
      if(m < 0){
        printf("Program terminated\n");
      }
  }
  return 0;
}

float e(float m){
  return (m*pow(C,2));
}
