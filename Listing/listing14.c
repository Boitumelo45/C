#include <stdio.h>
#include <math.h>
#define PI 3.1415

float angleDeg(float angle);
float angleRad(float angle);
enum {DEG, RAD};
int main(void){


 	float angle = 180;
	
	switch(DEG){ //symbolic constant
		case DEG:
			angle = angleDeg(angle); //convert to radius
			/*fall through*/
		case RAD:
			angleRad(angle);
			break;
		default:
			printf("Error: Invali type\n");	
			break;
	}
	printf("Angle (Rad) = %.2f\n", angle);
	
	return 0;
}

float angleDeg(float angle){
	angle = angle * (PI/180.0); //convert to radius
	return angle;
}

float angleRad(float angle){
	while(angle > PI){	    //normalize radians
		angle -= 2.0*PI;
	}
	while(angle < -PI){
		angle += 2.0*PI;
	}

	return angle;
}
