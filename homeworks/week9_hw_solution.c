#include <stdio.h>
#define MAX 10

/* Taken from course content.*/
int main()
{  
	int p1[MAX]={0}, p2[MAX]={0}, result[MAX]={0}, i, n;

	printf("Degree of 1st polynomial: ");
	scanf("%d",&n);

	printf("Enter coefficients: ");
	for (i=n; i>=0; i--)
		scanf("%d",&p1[i]);
	

	printf("Degree of 2nd polynomial: ");
	scanf("%d",&n);

	printf("Enter coefficients: ");
	for (i=n; i>=0; i--)
		scanf("%d",&p2[i]);
	
	/* Multiply */
	for (i=0; i<MAX; i++)
		for (n=0; n<MAX; n++)
			if (p1[i] * p2[n] != 0)
				result[i+n] += p1[i]* p2[n];

	for(i=0;i<2*MAX;i++){
		printf("%d ",result[i]);
	}		


	return 0;
}