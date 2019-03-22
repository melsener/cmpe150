
#include <stdio.h>
#include <stdlib.h>
#include "teachingcodes.h"

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// write your function here (you may remove this line)
void triangle(int a){
	for(int i=0;i<a;i++){
		for(int j = 0 ; j<i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {
	TC_BEGIN;
// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	

	//Write your code Here...

	int x;
	scanf("%d",&x);
	triangle(x);
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	TC_END;
	return 0;
}
