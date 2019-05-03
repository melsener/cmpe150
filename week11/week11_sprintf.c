#include <stdio.h>
#include <string.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);

	char str[100];
	sprintf(str,"You have entered %d and %d.\n",a,b);

	printf("%s",str);

    return 0;
}
