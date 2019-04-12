#include <stdio.h>
#include <stdlib.h>

int fetchDigit(int z,int x){
	int lim = 1;
	for(int i=1;i<x;i++){
		lim*=10;
	}
	if(z<lim){
		return -1;
	}
	z=z/lim;
	return z%10;
}

int main() {
	int z,x;
	scanf("%d%d",&z,&x);
	int res = fetchDigit(z,x);
	if(res == -1)
	{
		printf("Incorrect input\n");
	}
	else{
		printf("%d\n",res);
	}
	
	return 0;
}
