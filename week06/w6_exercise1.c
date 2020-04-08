#include <stdio.h>

int main(){

	int row;
	scanf("%d", &row);
	char c = 'A';

	for(int i = 0; i <row; i++){

		for(int j = 0; j < row - i; j++){
			printf("  ");
		}

		c = 'A';
		for(int j = 0; j < i; j++){ 	// prints from left to the middle (excl.)
			printf("%c ",c);
			c++;
		}

		for(int j = 0; j <= i; j++){	// prints from middle to the right
			printf("%c ",c);
			c--;
		}
		printf("\n");
	}
	
	return 0;
}



//          A 
//        A B A 
//      A B C B A 
//    A B C D C B A 
//  A B C D E D C B A


