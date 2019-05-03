#include <stdio.h>
#include <string.h>
// Adapted from https://www.tutorialspoint.com/c_standard_library/c_function_sscanf.htm

int main(){
	char str[100],weekday[20],month[20];
	int day,year;
	printf("Write weekday month day and year\n");
	fgets(str,100,stdin);
	sscanf( str, "%s %s %d %d", weekday, month, &day, &year );

	printf("%s %d, %d = %s\n", month, day, year, weekday );
    return 0;
}
