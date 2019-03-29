#include <stdio.h>
#include <stdlib.h>

int power(int a,int b){
	int res = 1;
	for(int i = 0;i<b;i++){
		res*=a;
	}
	return res;
}

int main() {

	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",power(a,b));

	return 0;
}
