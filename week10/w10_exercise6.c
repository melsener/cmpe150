#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

void read_matrix(int row, int column, int m[row][column]){
	int i,j;
	for(i = 0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&m[i][j]);
		}
	}
}

void compute_sum(int m1[][4],int m2[][4],int row, int column,int sum[][4]){
	int i,j;

	for(i = 0;i<row;i++){
		for(j = 0;j<column ; j++){
			sum[i][j] = m1[i][j] + m2[i][j];
		}
	}
}

void print_matrix(int row, int column, int m[row][column]){
	int i,j;
	for(i = 0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}


void transpose(int row, int column, int m[row][column],int m_T[column][row]){
	int i,j;
	for(i = 0; i < row; i++){
		for(j=0;j<column;j++){
			m_T[j][i] = m[i][j];
		}
	}
}

/*
Sample Input
1 2 3 4 5 6 7 8
8 7 6 5 4 3 2 1
*/

int main(){
	TC_BEGIN;

	int m1[2][4],m2[2][4],sum[2][4];

	read_matrix(2,4,m1);
	read_matrix(2,4,m2);

	compute_sum(m1,m2,2,4,sum);

	printf("Sum of them\n");
	print_matrix(2, 4, sum);

	int m1_T[4][2],m2_T[4][2];

	transpose(2,4,m1,m1_T);
	transpose(2,4, m2,m2_T);

	printf("Transpose of first matrix\n");
	print_matrix(4,2,m1_T);

	printf("Transpose of second matrix\n");
	print_matrix(4,2,m2_T);


	TC_END;
    return 0;
}
