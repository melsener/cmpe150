#include <stdio.h>
#include <stdlib.h>


int main() {

	
	/*Write a program which reads a positive integer number N (smaller than 50),
	  and prints the N.th fibonacci number.*/

	int n;
	scanf("%d",&n);

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
	printf("%d\n", res);

	return 0;
}
