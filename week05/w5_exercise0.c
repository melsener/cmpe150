/* Example: Suppose the user enters the sequence of characters. 
Write a program that counts the lowercase letters in this sequence until * is met: */
#include <stdio.h>

int main(){
	char ch;
	int lowercase = 0;
	
	scanf("%c", &ch);
	while(ch != '*'){
		if ((ch <= 'z') && (ch >= 'a'))
			lowercase++;

		scanf("%c", &ch);
	}

	printf("Number of lowercase characters: %d\n",lowercase);
	return 0;
}