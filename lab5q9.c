#include <stdio.h>
#include <stdlib.h>

long factorial(long a){
	long res=1;
	for(long i=1;i<=a;i++){
		res*=i;
	}
	return res;
}


int main() {
	
	long a;
	scanf("%ld",&a);
	printf("%ld",factorial(a));

	return 0;
}
