// calculating factorial
#include <stdio.h>

int main(){
	long fact = 1;
	int no;
	scanf("%d",&no);

	for(int i = 1 ; i<=no;i++)
	{
		fact*=i;
	}
    if (no >= 0){
        printf("Factorial is %ld\n",fact);
    }
    else{
        printf("It is a negative number");
    }
    
	return 0;
}