#include <stdio.h>
#include <stdlib.h>

void swap_val(int a, int b) {
	int temp = a;
	a=b;
	b=temp;
	printf("Inside: a: %d b: %d\n",a,b);
}

void swap_ref(int *a,int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a = 3;
	int b = 5;
	printf("Before swap_val %d %d\n",a,b);

	swap_val(a,b);
	printf("After swap_val %d %d\n",a,b);

	swap_ref(&a,&b);
	printf("After swap_ref %d %d\n",a,b);

    return 0;
}
