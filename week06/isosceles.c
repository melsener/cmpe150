#include <stdio.h>

int main() {
	int line;

	printf("Enter the height :");
	scanf("%d",&line);
	for (int i = 1; i <= line; i++)
	{
		for (int j = 0; j < line - i; j++)
			printf(" ");
		for (int j = 0; j < i * 2 - 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

// 4
//     *
//    ***
//   *****
//  *******
// *********