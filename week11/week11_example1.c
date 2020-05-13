#include <stdio.h>
#include <string.h>
#define MAX 50

int length(char arr[]){
	int size = 0;
	while(arr[size]!='\0'){
		size++;
	}
	return size;
}

int crop_newline(char arr[])
{	int size = 0;
	while(arr[size]!='\n'){
		size++;
	}
	arr[size] = '\0';
	return size;
}

int main(){
	char arr[MAX];

	fgets(arr,MAX,stdin);

	int len = length(arr);
	printf("Length of %s is %d %lu\n",arr,len,strlen(arr));
	// Notice that fgets takes \n also
	len = crop_newline(arr);
	printf("%s has length %d\n",arr,len);

    return 0;
}
