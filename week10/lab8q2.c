#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void merge(int a1[],int size1,int a2[],int size2,int a3[]){
	int index3=0,index2=0,index1=0;
	while(index2 < size2 && index1<size1){
		if(a1[index1]<a2[index2]){
			a3[index3] = a1[index1];
			index1++;
			index3++;
		}
		else{
			a3[index3] = a2[index2];
			index2++;
			index3++;

		}
	}
	while(index2<size2){
		a3[index3] = a2[index2];
		index3++;
		index2++;
	}
	while(index1<size1){
			a3[index3] = a1[index1];
			index3++;
			index1++;
	}
}

int main() {

	int a1[MAX],a2[MAX],a3[MAX*2];
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a1[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&a2[i]);
	}
	merge(a1,n,a2,m,a3);
	for(int i=0;i<m+n;i++){
		printf("%d ",a3[i]);
	}

	return 0;
}
