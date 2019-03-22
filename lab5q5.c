#include <stdio.h>
#include <stdlib.h>
#include "teachingcodes.h"

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// write your function here (you may remove this line)
char upperCase(char c){
	if(c>='A' && c<='Z'){
		return c;
	}
	else if(c>='a' && c<='z'){
		return c-32;
	}
	else{
		return '0';
	}
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {
	TC_BEGIN;
// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	

	//Write your code Here...
	char c;
	scanf("%c",&c);
	printf("%c",upperCase(c));


// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	TC_END;
	return 0;
}
