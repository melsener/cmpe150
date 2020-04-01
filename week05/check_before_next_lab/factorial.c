#include <stdio.h>

int main(){
	long fact = 1;				// initialize 'fact' variable with 1, since we need to multiply
	int no;						// declare 'no' variable, to be used to take input from the user
	scanf("%d",&no);			// get input using scanf

	for(int i = 1 ; i<=no;i++)	// notice that i starts with 1, because we don't multiply 0 in factorial
	{							// notice that condition check of for loop is '<=no'
		fact*=i;				// multiply 'fact' with each i from 1 to no
	}
    if (no >= 0){				// we need to check if the given number is a natural number
        printf("Factorial is %ld\n",fact);
    }
    else{						// if the given number is negative, no factorial exists
        printf("It is a negative number");
    }

	return 0;
}
