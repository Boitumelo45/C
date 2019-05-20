#include <stdio.h>
#include <math.h>

int computeAggregate();

int main(){

  int aggregate = 0;
  aggregate = computeAggregate();

  switch(aggregate){
        case 100:
        case 95:
               printf("A+\n");
               break;
        case 90:
        case 85:
                printf("A-\n");
                break;
        case 80:
        case 75:
                printf("B+\n");
                break;
        case 70:
        case 65:
                printf("B-\n");
                break;
        case 60:
        case 55:
                printf("C+\n");
                break;
        case 50:
        case 45:
                printf("C-\n");
                break;
        case 40:
        case 35:
                printf("D+\n");
                break;
        case 30:
        case 25:
                printf("D-\n");
                break;
        case 20:
        case 15:
                printf("E+\n");
                break;
        default:
                printf("E-.\n");
                break;
  }
  return 0;
}

int computeAggregate(){

    float total = 0.0;
    int count = 0;
    float grade = 0.0;
    printf("Enter a grade you obtained for a module: [-1 to exit]: ");
    scanf("%f", &grade);

    while(grade > 0){
        total += grade;
        count++;
        printf("Enter a grade you obtained for a module: [-1 to exit]: ");
        scanf("%f", &grade);
    }

    //compute average
    printf("total = %.2f, count = %d\n", total, count);
    printf("Aggregate = %.2f%%\n", (total/(count)));
    return (int)(total/(count));
}
