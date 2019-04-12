
#include <stdio.h>
#include <stdlib.h>

int factorial(int a){
	int res=1;
	for(int i=1;i<=a;i++){
		res*=i;
	}
	return res;
}


long facSum(long a){
	long res = 0;

	int digit = a%10;
	res = factorial(digit);
	a=a/10;

	while(a!=0){
		digit = a%10;
		res+=factorial(digit);
		a=a/10;
	}

	return res;
}

int main() {
	long a;
	scanf("%ld",&a);
	printf("%ld",facSum(a));

	return 0;
}
