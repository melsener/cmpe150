#include <stdio.h>

int main(){
	int a = 3, b = 4, c = 5;
	
	if (a<b<c){
		printf("a<b<c\n");
	}
	if (a<c<b){
		printf("a<c<b\n");
	}
	if(b<a<c){
		printf("b<a<c\n");
	}
	if(b<c<a){
		printf("b<c<a\n");
	}
	if(c<a<b){
		printf("c<a<b\n");
	}
	if(c<b<a){
		printf("c<b<a\n");
	}
	return 0;
}