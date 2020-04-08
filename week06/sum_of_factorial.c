#include <stdio.h>

int main(){

	long sumF=0;

	int a, digit, factorial;
	scanf("%d",&a);
	while(a>0){
		digit = a % 10;
		a = a/10;

		factorial = 1;
		for (int i = 1; i<=digit; i++){
			factorial *= i;
		}
		sumF += factorial;
	}


	printf("Sum of factorial is %ld \n",sumF);

	return 0;
}
