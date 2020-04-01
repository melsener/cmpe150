
#include <stdio.h>

int main() {
	
	int a,b;					// declare variable 'a' and 'b' to be used to take input from the user
	scanf("%d%d",&a,&b);		// get inputs using scanf
	int res = 1;				// since we are going to multiply, initialize it with 1
	for(int i=1; i<=b; i++){	// we need to multiply a 'b times'
		res*=a;
	}
	printf("%d\n",res);			// print the result

	return 0;
}
