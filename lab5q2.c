#include <stdlib.h>
#include <teachingcodes.h>

//write toUpper function here
char toUpper(char c){
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

int main() {
	TC_BEGIN;

	//Read a word here,
	//and using the toUpper function,
	//print its UPPER CASE version
	char c;
	scanf("%c",&c);
	while(c != '\n'){
		printf("%c",toUpper(c));
		scanf("%c",&c);
	}
	TC_END;
	return 0;
}
