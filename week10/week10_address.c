#include <stdio.h>

int main(){
	int a[3];
	printf("%p:array\n%p:&array[0]\n%p:&array\n",a,&a[0],&a);
	return 0;
}