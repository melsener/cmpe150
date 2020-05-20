#include <stdio.h>
int main() {
	double array[21][2];					// to keep the fractional numbers approrpriately, we use double datatype
	double temp;		
	long power;
	for(int i=0;i<21;i++){
		if (i == 0)				
			power = 1;
		else
			power = power * 2;
		temp = 1.0/power;
		array[i][0] = i;					// we are holding an integer in double array..
		array[i][1] = temp;					// store the double value
	}

	for(int i= 0; i<21;i++){
		printf("%d\t",(int)array[i][0]);	// observe what happens if we do not explicitly cast it to integer
		printf("%.10lf\t",array[i][1]);		// formatted output to show 10 digits after the decimal point
		printf("\n");
	}
	return 0;
}
