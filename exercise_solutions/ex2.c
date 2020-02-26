#include <stdio.h>
int main() {
	int input_seconds, hours, minutes, sec;
	printf("Input seconds: ");
	scanf("%d", &input_seconds);
	
	hours = (input_seconds/3600); 
	minutes = (input_seconds -(3600*hours))/60;
	sec = (input_seconds -(3600*hours)-(minutes*60));
	
	printf("%d:%d:%d\n",hours,minutes,sec);
	
	return 0;
}