#include <stdio.h>

void printUpper(char c){
	
	printf("%c", c - ('a' - 'A'));
}

int main(){
	
	char input_char;
	scanf("%c", &input_char);

	if ((input_char >= 'a') & (input_char <= 'z'))
	{
		printUpper(input_char);
	}
	else
	{
		printf("%c", input_char);
	}
	
	return 0;
}