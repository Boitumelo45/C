#include <stdio.h>
#include <math.h>

struct Point{
	int x, y;
	};

float distance(struct Point p1, struct Point p2);

int main(){
	struct Point a = {2,2}, b = {2,2};
	printf("Distance: %.2f\n", distance(a,b));
	return 0;
}


float distance(struct Point p1, struct Point p2){
	return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));
}
