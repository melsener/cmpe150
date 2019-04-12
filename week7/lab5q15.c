#include <stdio.h>
#include <stdlib.h>

int isPrime(int a){
	if (a<=1)
		return 0;

	for(int i=2;i<a;i++){
		if(a%i == 0)
			return 0;
	}
	return 1;
}

void primesBetween(int a,int b){
	for(int i=a;i<=b;i++)
	{
		if(isPrime(i))
		{
			printf("%d ",i);
		}
	}
}

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	primesBetween(a,b);

	return 0;
}
