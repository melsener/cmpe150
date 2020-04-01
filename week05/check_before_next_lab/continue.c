/*
	Question: Print the odd numbers from 0 to 50
*/
#include <stdio.h>

int main() {

	for (int i = 0; i < 50; i++) { 		// Loop from 0 to 50

		if(i % 2 == 0)					// if 'i' is divisable by 2 (even number), continue to top (ignores next statement)
			continue;

		printf("%d\n",i);				// since even numbers causes execution of 'continue', this statent only executed when 'i' is odd
	
	}
	return 0;
}