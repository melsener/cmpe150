#include <stdio.h>
#include <stdlib.h>

int main() {
	
	/* Write a program that takes 2 integers
	a and b, then prints the result of a^b (a*a*a...*a*a). */
	int a,b;
	scanf("%d%d",&a,&b);
	int res = 1;
	for(int i=1; i<=b; i++){
		res*=a;
	}
	printf("%d\n",res);

	return 0;
}
