#include <stdio.h>
#include <stdlib.h>

int main() {

	/*Write a program that takes 2 integers and prints their least common multiple (LCM).
	 *
	 */

	int num1,num2,lcm,max;
	scanf("%d%d",&num1,&num2);

	max = num1;
	if(num2>max)
		max = num2;
	
	for(int i=max; i<=(num1*num2);i++)
	{
		if(i%num1==0 && i%num2==0)
		{
			lcm = i;
			break;
		}
	}
	printf("LCM: %d",lcm);

	return 0;
}
