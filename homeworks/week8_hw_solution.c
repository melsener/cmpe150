#include <stdio.h>
#include <stdlib.h>

void divideWithRemainder(int number, int divisor, int* result, int* remainder){
	if(divisor!=0){
		*result = number/divisor;
		*remainder= number%divisor;
	}
}

int main() {
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	divideWithRemainder(a,b,&c,&d);
	printf("c: %d d: %d\n",c,d);

	return 0;
}