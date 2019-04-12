#include <stdio.h>
#include <stdlib.h>

int main() {
	/*Write a program that takes 2 integers and
	  prints their greatest common divisor (GCD).*/

	int num1,num2,gcd=1;
	scanf("%d%d",&num1,&num2);
	for(int i=1; i<=num1 && i <=num2;i++){

		if(num1%i==0 && num2%i==0)
		{	
			gcd = i;
		}
	}
	printf("GCD= %d",gcd);
	
	return 0;
}
