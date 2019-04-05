#include <stdio.h>
#include <stdlib.h>

int reverse(int x){
	int num = 0;
	int lim;
	for(lim=1 ; lim<x;){
		lim*=10;
	}
	while(x!=0){
		lim/=10;
		num+=(x%10)*lim;
		x/=10;
	}
	return num;
}

int main() {
	int n;
	scanf("%d",&n);
	printf("%d",reverse(n));
	return 0;
}
