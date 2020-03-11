#include <stdio.h>

int main(){
	char shape_type;
	float side_length;
	float circumference;
	scanf("%c",&shape_type);
	scanf("%f",&side_length);
	
	switch(shape_type){
		case 'c':
			circumference = 2 * 3.14 * side_length;
			break;
		case 's':
			circumference = 4 * side_length;
			break;
		case 't':
			circumference = 3 * side_length;
			break;
		case 'h':
			circumference = 6 * side_length;
			break;
	}

	printf("%f\n",circumference);
	return 0;
}