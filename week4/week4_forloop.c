#include <stdio.h>

int main(){
	/* Following examples show different
	styles that produce the same output using for loop*/

	//Example - 1
	printf("Example - 1\n");
	for(int i = 0 ; i < 10 ; i ++)
	{
		printf("%d\n",i);
	}

	//Example - 2
	int k = 0;
	printf("Example - 2\n");
	for(;k<10;k++)
	{
			printf("%d\n",k);
	}

	//Example - 3
	printf("Example - 3\n");
	for(int i = 0; i<10;)
	{
		printf("%d\n",i);
		i++;
	}

	//Example - 4
	printf("Example - 4\n");
	for(int i = 0; ;i++)
	{
		if(i >= 10)
			break;
		printf("%d\n",i);
	}

	//Example - 5
	int j = 0;
	printf("Example - 5\n");
	for(;;)
	{
		if(j >= 10)
			break;
		printf("%d\n",j);
		j++;
	}
	return 0;
}