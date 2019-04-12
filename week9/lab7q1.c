#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main() {

	char array[MAX];

		char sentinel;
		int counter=0;

		scanf("%c",&sentinel);

		while(sentinel!='\n'){
			array[counter] = sentinel;
			counter++;
			scanf("%c",&sentinel);
		}
		for(int i=0;i<counter;i++){
			array[i] = array[i] + 1;
			printf("%c",array[i]);
		}
		printf("\n");
		for(int i=0;i<counter;i++){
			array[i] = array[i]-1;
				printf("%c",array[i]);
		}

	return 0;
}
