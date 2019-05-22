#include <stdio.h>
#include <math.h>
#define PI 3.1416
float area(float radius);

int main(int argc, char * somethingFishy[]){

  const float r = 2.13;
  printf("Area = %.2f\n", area(r));
  //r = 1.4; <-- will give an error since r cannot be mutated
}

float area(float radius){
  return pow(PI, 2) * radius;
}
