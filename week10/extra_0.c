#include <stdio.h>

int main(){
	int a[] = {1,2,3};
	
	printf("--- FOR INTEGER ---");
	printf("&a[0] = %ld\n&a[1] = %ld\n", &a[0], &a[1]);
	printf("a = %ld\n(a+1) = %ld\n", a, a+1);
	printf("size of an integer %ld\n", sizeof(int));
	
	printf("--- FOR CHAR ---");
	char b[] = {'a','b','c'};
	printf("&b[0] = %ld\n&b[1] = %ld\n", &b[0], &b[1]);
	printf("b = %ld\n(b+1) = %ld\n", b, b+1);
	printf("size of a char %ld\n", sizeof(char));
	
	return 0;
}