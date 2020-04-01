#include <stdio.h>

int main(){
	/* Following examples show different
	styles that produce the same output using for loop*/

	//Example - 1
	printf("Example - 1\n");
	for(int i = 0 ; i < 10 ; i ++)		// This is a complete for loop
	{
		printf("%d ",i);
	}
	printf("\n");

	//Example - 2
	int k = 0;						// initialize loop variable 'k' to zero
	printf("Example - 2\n");
	for(;k<10;k++)					// here we did not use the first part, since we initalized 'k' before
	{
			printf("%d ",k);
	}
	printf("\n");

	//Example - 3
	printf("Example - 3\n");
	for(int i = 0; i<10;)			// we omit the increment part in here
	{
		printf("%d ",i);
		i++;						// but we are incrementing inside. IF YOU FORGOT IT: INFINITE LOOP!!!
	}
	printf("\n");

	//Example - 4
	printf("Example - 4\n");
	for(int i = 0; ;i++)			// here we omit the condition check part
	{
		if(i >= 10)					// but we are checking inside
			break;					// when condition holds, break (exits from the loop)
		printf("%d ",i);
	}
	printf("\n");

	//Example - 5
	int j = 0;						// initialize loop variable 'j' to zero
	printf("Example - 5\n");
	for(;;)							// there is nothing here ???
	{
		if(j >= 10)					// but we are checking the loop condition inside
			break;					// when condition holds, break (exits from the loop)
		printf("%d ",j);
		j++;						// we are incrementing inside. IF YOU FORGOT IT: INFINITE LOOP!!!
	}
	printf("\n");
	
	return 0;
}