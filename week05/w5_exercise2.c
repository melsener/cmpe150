// checking a number is perfect or not
#include <stdio.h>

int main(){

	int sum = 0;
	int number;
	scanf("%d",&number);
	for(int i=1; i<number; i++){
		if(number % i == 0)
			sum+=i;
	}

    if (number == sum)
        printf("%d is a perfect number",number);
    else
        printf("%d is not a perfect number",number);

	return 0;
}