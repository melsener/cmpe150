#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int eraser(int a1[],int n,int a2[], int m)
{	int tmp[MAX],index=0;
	for(int i=0;i<n;i++){
		int j;
		for(j=0;j<m;j++){
			if(a2[j]==a1[i]){
				break;
			}
		}
		if(j==m){
			tmp[index] = a1[i];
			index++;
		}
	}
	for(int i=0;i<index;i++){
		a1[i] = tmp[i];
	}
	return index;
}
int main() {
	int n,m,a1[MAX],a2[MAX];
	scanf("%d%d",&n,&m);

	for(int i=0;i<n;i++){
		scanf("%d",&a1[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&a2[i]);
	}
	int newSize = eraser(a1,n,a2,m);
	for(int i=0;i<newSize;i++){
		printf("%d ",a1[i]);
	}

	return 0;
}
