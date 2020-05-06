#include <stdio.h>

int main(){
	int a[3];

	// C automatically passes arrays to functions by reference
	printf("%p: array\n", a);			/* When an array name is passed to a function, what is passed
										is the address of the initial element of an array*/
	printf("%p: &array[0]\n",&a[0]); 	// the address of the initial element of an array
	printf("%p: &array\n",&a);			// WHAT IS THIS?

	printf("\n");

	printf("%p: array + 1\n", a+1);			
	printf("%p: &array[1]\n",&a[1]);

	printf("%p: &array+1\n", &a+1); // WOW
	printf("SIZE OF INTEGER: %lu\n", sizeof(int));

	return 0;
}
