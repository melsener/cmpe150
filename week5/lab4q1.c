#include <stdio.h>
#include <stdlib.h>

int main() {

	
	/*Write a program which reads an integer (smaller than 1000000) 
	 then prints out how many of the digits are odd numbers. */
	
	int num,tmp;
	scanf("%d",&num);
	int odd_numbers=0;
	while(num!=0){
		tmp = num%10;
		if(tmp%2==1)
		{
			odd_numbers++;
		}
		num=num/10;
	}

	printf("%d\n",odd_numbers);

	return 0;
}