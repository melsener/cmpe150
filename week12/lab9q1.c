#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(void) {
	int n,m,arr[MAX][MAX];
	scanf("%d%d",&n,&m);

	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m; j++){
			scanf("%d",&arr[i][j]);
		}
	}

	for(i=0;i<m;i++){
		for(j=0;j<n; j++){
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
