
#include <stdio.h>

int main() {
	int input, sum = 0;			// declare 'input' variable to be used to take input from the user. initialize 'sum' to zero

	scanf("%d",&input);			// get input using scanf

	while(input >= 0){			// get input from the user until a negative number is entered
		sum += input;			// sum inputs
		scanf("%d",&input);		// continue getting input
	}
	printf("%d",sum);			// print the summation
	
	return 0;
}
