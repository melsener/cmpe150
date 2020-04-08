# include <stdio.h>

int main(){

	printf("Without break\n");
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

	// Break Example - 1
	printf("Break Example - 1\n");
	for(int i = 0; i <3; i++)
	{	
		printf("Outer %d:\n",i);
		printf("Inner Loop:\n");
		for(int j = 0; j <5; j++){
			break;
			printf("%d ",j);
		}
		printf("done.\n");
	}
	printf("\n");

	// Break Example - 2
	printf("Break Example - 2\n");
	for(int i = 0; i <3; i++)
	{	
		printf("Outer %d:\n",i);
		break;
		printf("Inner Loop:\n");
		for(int j = 0; j <5; j++){
			printf("%d ",j);
		}
		printf("done.\n");
	}
	printf("\n");

	// Break Example - 3
	printf("Break Example - 3\n");
	for(int i = 0; i <3; i++)
	{	
		printf("Outer %d:\n",i);
		printf("Inner Loop:\n");
		break;
		for(int j = 0; j <5; j++){
			printf("%d ",j);
		}
		printf("done.\n");
	}
	printf("\n");
	
	return 0;
}