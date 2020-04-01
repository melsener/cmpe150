#include <stdio.h>

int main(){

	int sum = 0;					// initialize 'sum' variable to zero, since we will use it for summation

	int number;						// declare 'number' variable to be used to take input from the user
	scanf("%d",&number);			// get input using scanf
	for(int i=1; i<number; i++){	// loop variable i starts from i to number
		if(number % i == 0)			// if i is aliquat of number then add it to the 'sum' variable
			sum+=i;
	}

    if (number == sum)				// if 'sum' variable equals to the 'number' the number is perfect number
        printf("%d is a perfect number",number);
    else
        printf("%d is not a perfect number",number);

	return 0;
}
