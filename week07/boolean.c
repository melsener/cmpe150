#include <stdio.h>

int isLower(char ch){
	if(ch>='a' && ch<='z')
	{
		return 1;
	}
	return 0;
}
char toUpper(char ch){
	return ch - 32;
}
int main(){
	char c;
	scanf("%c",&c);
	if(isLower(c) == 1)
	{
		printf("%c",toUpper(c));
	}
	else{
		printf("%c",c);
	}

	return 0;
}
