/*
	Question: Check if the given number is prime or not
*/
#include <stdio.h>

int main() {

	int number, isPrime = 1;			// declare 'number' variable to be used to take input from the user. isPrime is used as a flag initialized to 1 (True)
	scanf("%d",&number);				// get input using scanf

	for(int i = 2; i<number; i++)		// we need to check whether the 'number' is divisable by the numbers from 2 to number
	{
		if (number % i == 0)			// if there is a number that divides 'number', the 'number' is not prime 
		{	isPrime = 0;				// change the flag to False (0)
			break;						// if we found a number that divides the 'number' no need to go further, break and exit the loop
		}
	}

	if (isPrime)						// if 'isPrime' equal to 1 that means it is true and we say that the 'number' is prime
		printf("Number is prime\n");
	else								// if 'isPrime' equal to 0 that means it is false we say that the 'number' is NOT prime
		printf("Number is not prime\n");
	return 0;
}