#include <stdio.h>

void call_by_value(int a){
	a+= 5;
}

void call_by_ref(int *a){
	*a+=5;
}


int main(){
	int num = 5;
	// Observe the effect of call by value
	call_by_value(num);
	printf("After call by value:%d\n",num);

	// Observe the effect of call by reference
	call_by_ref(&num);
	printf("After call by reference:%d\n",num);
	return 0;
}



