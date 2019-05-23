#include <stdio.h>
#include <math.h>
#include <assert.h>

float distance(float x1, float y1, float x2, float y2);

int main(int argc, const char *argv[]){
	
	float x1 = 2.3, y1 = 12.0, x2 = -30.4, y2 = -78.2;	
	printf("Calculated distance: %.2f m.\n", distance(x1,y1,x2,y2));
	
	return 0;
}

float distance(float x1, float y1, float x2, float y2){
	//designing for errors
	
	float s = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	assert(s >= 0 && s < 1e9);

	return s;
}


