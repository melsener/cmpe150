# include <stdio.h>

int main(){
	int a,b,c,sum;
	printf("Enter three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	printf("The sum is %d\n", sum);
	return 0;
}