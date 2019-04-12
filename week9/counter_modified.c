#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int isUpper(char c){
	return (c>='A' && c<='Z');
}

int isLower(char c){
	return (c>='a' && c<='z');
}

/*User enters a sequence of characters. You want to separate the lowercase and
 the uppercase letters in two different arrays. The sequence is finished when % is 
 entered. You should ignore all other characters. After taking the input print the
 lower characters and upper characters separately.*/

int main(){
	char lowerarray[MAX], upperarray[MAX];
	char sentinel;
	int lowerindex=0,upperindex=0;

	scanf("%c",&sentinel);
	while(sentinel!='%'){
		if(isLower(sentinel)){
			lowerarray[lowerindex++] = sentinel;
		}
		else if(isUpper(sentinel)){
			upperarray[upperindex++] = sentinel;
		}
		scanf("%c",&sentinel);
	}

	printf("Lower Chars:\n");
	for(int i=0;i<lowerindex;i++){
		printf("%c",lowerarray[i]);
	}

	printf("\nUpper Chars:\n");
	for(int i=0;i<upperindex;i++){
		printf("%c",upperarray[i]);
	}

    return 0;
}
