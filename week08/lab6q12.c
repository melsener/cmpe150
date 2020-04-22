#include <stdio.h>
#include <stdlib.h>

//write divideWithRemainder function here
void divideWithRemainder(int number, int divisor, int* result, int* remainder){
	*result = number/divisor;
	*remainder = number%divisor;
}
int main(void) {
	//create and initialize the required
	//variables, and call the function
	//to see the result here
	int a,b,c,d;
	scanf("%d%d",&a,&b);

	divideWithRemainder(a,b,&c,&d);
	printf("Result:%d\n",c);
	printf("Remainder:%d\n",d);

	return 0;
}
