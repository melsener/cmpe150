#include <stdio.h>

int reverse(int x){
	int num = 0;

	while(x>0){
		num = num*10 + x%10;
		x = x/10;
	}
	return num;
}

int main() {

	int n;
	scanf("%d",&n);
	printf("%d",reverse(n));

	return 0;
}
