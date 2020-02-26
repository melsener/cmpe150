#include <stdio.h>
#include <limits.h>

int main(){
	// An integer can not hold TOO BIG numbers.
	int a = INT_MAX;
	printf("a = %d\n",a);

	int b = a + 1;
	printf("b = %d\n",b);

	//To keep bigger numbers use "long" data type.
	long c = a;
	c = c + 1;
	printf("c = %ld\n",c);

	//Notice this
	long d = a + 1;
	printf("d = %ld\n",d);

	return 0;
}
