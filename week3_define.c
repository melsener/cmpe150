#include <stdio.h>
#define PI 3.14

int main(){
		int r;
		scanf("%d",&r);
		float a = 2 * PI * r;
		printf("Circumference: %.1f\n",a);
		PI = 3; // gives error
		a = PI * r * r;
		printf("Area: %.1f\n",a);


		return 0;

}