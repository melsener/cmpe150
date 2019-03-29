
#include <stdio.h>
#include <stdlib.h>

void rectangle(int x,int y){
	for (int i=0 ; i<x; i++){
		for(int j=0; j<y; j++){
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	rectangle(n,m);
	return 0;
}
