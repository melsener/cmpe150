#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	int fib1 = 0, fib2 = 1, res;

	for(int i = 0 ; i < n ; i++)
	{
		if(i<=1){
			res = i;
		}
		else{
			res = fib1 + fib2;
			fib1 = fib2;
			fib2 = res;
		}
	}
	return res;
}

int main() {
	int a;
	scanf("%d",&a);
	printf("%d",fib(a));
	return 0;
}
