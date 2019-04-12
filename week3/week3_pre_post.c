#include <stdio.h>

int main(){
	int n = 5;

	//First increments to 6 and prints 6
	printf("PreIncrement: %d\n",++n);
	//First prints 6 then increments to 7
	printf("PostIncrement: %d\n",n++);
	//Prints the last value
	printf("After post increment: %d\n",n);
	return 0;
}