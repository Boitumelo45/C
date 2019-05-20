#include <stdio.h>
/*
 * Static variables have a property of preserving
 * their value even after they are out of their scope.
 * static data_type variable_name = variable_value

	static variables

	static variables are allocated memory in data segment, not stack segment.
	1. data segment
	2. stack segment
	3. heap segment

	static variables are initialized as 0 in memory.
	static variables are used to eliminate scope of variables or functinos.
*/

int func();

int main(void){
	for(int i = 0; i < 5; i++){
			printf("Calling static method: %d\n", func());
	}
	return 0;
}

int func(){
	static int count = 0;
	count++;
	return count;
}
