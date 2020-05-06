#include<stdio.h>
#include <stdlib.h>
#define N 3

int changearray(int arr[],int num,int d){
	int changes = 0;
	for(int i=0;i<N;i++){
		if(arr[i]==num){
			changes++;
			arr[i] = d;
		}
	}
	return changes;
}

/* SAMPLE INPUT:
5 2
1 5 1
*/
int main(){
	int num1,num2,array[N];
	scanf("%d%d",&num1,&num2);

	for(int i =0;i<N;i++){
		scanf("%d",&array[i]);
	}

	int res= changearray(array,num1,num2);
	printf("%d numbers changed.\n",res);

	for(int i=0;i<N;i++){
		printf("%d ",array[i]);

	}
	return 0;
}
