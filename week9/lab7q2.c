#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>
#define MAX 50

int main() {
	int array[MAX],N;
	scanf("%d",&N);
	for(int i=N-1;i>=0;i--){
		scanf("%d",&array[i]);
	}

	for(int i=0;i<N;i++){
			printf("%d ",array[i]);
	}

	return 0;
}
