#include <stdio.h>
#include <math.h> //library header file
#define PI 3.1415

//A = PI^2 * r
double area(double radius);

int main(void){
  double r = 1.00000388488484884453434343;
  printf("Area(%f) = %.2f\n", r, area(r));
  return(0);
}


double area(double radius){
  return pow(PI, 2) * radius; //math
}
