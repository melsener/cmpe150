#include <stdio.h>

void triangle(int a){
	for(int i=0;i<a;i++){
		for(int j = 0 ; j<i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main() {

	int x;
	scanf("%d",&x);
	triangle(x);

	return 0;
}
