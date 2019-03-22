#include <stdio.h>
#include <stdlib.h>
#include "teachingcodes.h"

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// write your function here (you may remove this line)
int sum(int a,int b){
	return a+b;
}
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {
	TC_BEGIN;
// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	//Write your code Here...
	int x,y;
	scanf("%d%d",&x,&y);

	printf("%d",sum(x,y));

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	TC_END;
	return 0;
}
