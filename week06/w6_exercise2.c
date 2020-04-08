# include <stdio.h>

int main(){

	printf("Without continue\n");
	for(int i = 0; i <3; i++)
	{	
		printf("Outer %d:\n",i);
		printf("Inner Loop:\n");
		for(int j = 0; j <5; j++){
			printf("%d ",j);
		}
		printf("done.\n");
	}
	printf("\n");

	// Continue Example - 1
	printf("Continue Example - 1\n");
	for(int i = 0; i <3; i++)
	{	
		printf("Outer %d:\n",i);
		printf("Inner Loop:\n");
		for(int j = 0; j <5; j++){
			continue;
			printf("%d ",j);
		}
		printf("done.\n");
	}
	printf("\n");

	// Continue Example - 2
	printf("Continue Example - 2\n");
	for(int i = 0; i <3; i++)
	{	
		printf("Outer %d:\n",i);
		continue;
		printf("Inner Loop:\n");
		for(int j = 0; j <5; j++){
			printf("%d ",j);
		}
		printf("done.\n");
	}
	printf("\n");

	// Continue Example - 3
	printf("Continue Example - 3\n");
	for(int i = 0; i <3; i++)
	{	
		printf("Outer %d:\n",i);
		printf("Inner Loop:\n");
		continue;
		for(int j = 0; j <5; j++){
			printf("%d ",j);
		}
		printf("done.\n");
	}
	printf("\n");
	
	return 0;
}