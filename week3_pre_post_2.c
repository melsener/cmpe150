#include <stdio.h>

int main(){
	int n = 10, m = 9;

	m+=n;
	printf("m:\t%d\n",m);

	n+=m++;
	printf("m:\t%d,n:\t%d\n",m,n);

	n+=++m;
	printf("m:\t%d,n:\t%d\n",m,n);

	return 0;

}