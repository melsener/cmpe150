#include <stdio.h>

int main(){
	float a,b;

	scanf("%f%f",&a,&b);
	
	printf("%f\n",a+b);

	printf("%d\n",a+b); // This is strange. Not mandatory but if you
						// are curious, check this link:
						// https://stackoverflow.com/questions/7480097/what-happens-to-a-float-variable-when-d-is-used-in-a-printf
	
	printf("%d\n",(int)(a+b)); // If you want to print the integer part,
							   // you need to cast it!
	return 0;
}