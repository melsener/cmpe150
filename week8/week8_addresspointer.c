#include <stdio.h>

int main(){
	// Adapted from Deitel C How to Program

	int num;
	int *numptr;

	num = 5;
	numptr = &num;

	// %p is specifies address of pointer
	printf("Address of num is %p and the value of the numptr is %p\n",&num,numptr);
	printf("Value of num is %d and the value of the *numpt is %d\n",num,*numptr);


	return 0;
}