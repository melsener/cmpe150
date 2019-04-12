#include <stdio.h>
#include <stdlib.h>

char isPerfect(int a){
	int k = 0;
	for(int i=1;i<a;i++){
		if(a%i==0){
			k+=i;
		}
	}
	if(k==a){
		return 't';
	}
	return 'f';
}


int main() {
	int a;
	scanf("%d",&a);
	printf("%c",isPerfect(a));
	return 0;
}
