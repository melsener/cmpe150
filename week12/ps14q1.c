#include <stdio.h>
#include <stdlib.h>

int main(){
	int houses[10][6] = {{2,2,2,2,2,2},
						 {1,2,2,1,2,1},
						 {3,3,4,2,2,2},
						 {1,1,1,1,1,1},
						 {4,4,4,0,0,0},
						 {5,5,1,1,1,5},
						 {2,2,2,2,1,1},
						 {1,3,2,2,2,2},
						 {1,2,3,4,5,6},
						 {2,2,2,0,0,0}};

	int i,j;
	float average = 0;

	for(i = 0; i<10;i++){
		average=0;
		for(j=0;j<6;j++){
			average += houses[i][j];
		}
		printf("Apartment %d has average %f people.\n",i,(average/6.0));
	}

    return 0;
}
