#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define ASCII_SIZE 256

int main() {
	char str[MAX];
	int i;
	fgets(str, MAX, stdin);
	int freq[ASCII_SIZE] = {0};
	for(i=0; str[i] != '\0'; i++){
		freq[str[i]]++;
	}
	int max=0;
	char max_char;
	for(i=0; i<ASCII_SIZE; i++){
		if(freq[i] > max){
			max = freq[i];
			max_char = i;
		}
	}
	printf("%c", max_char);
	return 0;
}
