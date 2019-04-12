#include <stdio.h>

int main(){
	//Suppose we want to print multiplications of two digits but we do not want to print the result if they are equal.
	for(int i = 1; i< 10 ; i++)
	{
		for(int j = 1 ; j<10 ; j++)
		{
			if(i==j)
			{
				printf(" \t");
				continue;		//turns back to inner loop's condition check
			}
			printf("%d\t",i*j);
		}
		printf("\n");
	}
}