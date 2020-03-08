#include <stdio.h>
#define G 9.8

int main(){

	double mass;
	scanf("%lf", &mass);
	printf("The Weight = %.3lf\n",mass * G);
	return 0;
}