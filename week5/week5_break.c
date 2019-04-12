#include <stdio.h>

int main()
{
	for(int i=0 ; i < 10 ; i++){
		printf("i= %d ",i);
		for(int j=0; j <10; j++){
			if(j>6){
				break;		//break keyword terminates the inner loop, not the other.
			}
			printf("j=%d ",j);
		}
		printf("\n");
	}
}