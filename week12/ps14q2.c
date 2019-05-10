#include <stdio.h>
#include <stdlib.h>

void read_matrix(int m[][4],int row, int column){
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

void print_matrix4(int m[][4],int row, int column){
	int i,j;
	for(i = 0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}

void print_matrix2(int m[][2],int row, int column){
	int i,j;
	for(i = 0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}

void transpose(int m[][4],int m_T[][2],int row,int column){
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
	int m1[2][4],m2[2][4],sum[2][4];

	read_matrix(m1,2,4);
	read_matrix(m2,2,4);

	compute_sum(m1,m2,2,4,sum);

	printf("Sum of them\n");
	print_matrix4(sum,2,4);

	int m1_T[4][2],m2_T[4][2];

	transpose(m1,m1_T,2,4);
	transpose(m2,m2_T,2,4);

	printf("Transpose of first matrix\n");
	print_matrix2(m1_T,4,2);

	printf("Transpose of second matrix\n");
	print_matrix2(m2_T,4,2);


	return 0;
}
