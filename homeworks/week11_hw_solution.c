#include <stdio.h>
#include <stdlib.h>

#define MAX 50

// calculates length of the string
int len(char a[]){
	int counter = 0;
	while(a[counter]!='\0'){
		counter++;
	}
	return counter;
}

int main() {
	char first[MAX],second[MAX];

	fgets(first,MAX,stdin);

	fgets(second,MAX,stdin);

	int len_1 = len(first);
	int len_2 = len(second);

	int i,j;
	for(i = 0;i<=len_1-len_2;i++){

		for(j=0;j<len_2-1;j++)
		{
			if(first[i+j]!=second[j])
				break;
		}
		if(j == len_2-1){

			//check if it is a word
			if(first[i + j] == ' ' || first[i + j] == '\t' || first[i + j] == '\n' ||  first[i + j] == '\0')
			{	int k;
				//shift the remaining words to the left
				for(k = i ; first[k]!='\0';k++){
					first[k] = first[k+len_2];
				}

				len_1 = len_1 - len_2+1;
				i--;

			}
		}

	}
	// finish the string
	first[len_1] = '\0';

	printf("%s",first);

	return 0;
}
