#include <stdio.h>

int main(){
	double a;

	scanf("%lf", &a);
	printf("I can print too much! %lf\n",a);
	printf("I can print not too much! %.5lf\n",a);
	printf("I can print so little! %.2lf\n",a);

	return 0;
}