#include <stdio.h>
#include <math.h>

int computeAggregate();

int main(){

  int aggregate = 0;
  aggregate = computeAggregate();
  printf("Aggregate = %d%%\n", aggregate);
  switch(aggregate){
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
               printf("A+\n");
               break;
        case 90:
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
                printf("A-\n");
                break;
        case 80:
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
                printf("B+\n");
                break;
        case 70:
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
                printf("B-\n");
                break;
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
                printf("C+\n");
                break;
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 44:
        case 43:
        case 42:
        case 41:
                printf("C-\n");
                break;
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 35:
        case 34:
        case 33:
        case 32:
        case 31:
                printf("D+\n");
                break;
        case 30:
        case 29:
        case 28:
        case 27:
        case 26:
        case 25:
        case 24:
        case 23:
        case 22:
        case 21:
                printf("D-\n");
                break;
        case 20:
        case 19:
        case 18:
        case 17:
        case 16:
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
    printf("Passed = %d%%\n", (int)(total/(count)));
    return (int)(total/(count));
}
