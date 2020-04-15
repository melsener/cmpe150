#include <stdio.h>

long factorial(long x){
	long res = 1;
	for(int i=1;i<=x;i++){
		res*=i;
	}
	return res;
}

long perm(long n,long k){
	long nom = factorial(n);
	long denom = factorial(n-k);
	long res = nom/denom;
	return res;
}

long comb(long n, long k){
	long x = perm(n,k);
	long y = factorial(k);
	long res = x/y;
	return res;
}

int main(){

	int n,k;

	scanf("%d%d",&n,&k);

	printf("factorial:%ld permutation:%ld combination:%ld\n",factorial(n),perm(n,k),comb(n,k));

	return 0;

}
