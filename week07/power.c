#include <stdio.h>

float power1(float n,int k){
	float res = 1;
	for(int i=1;i<=k;i++){
		res*=n;
	}
	return res;
}

int main(){
	double number;
	int power;

	printf("Enter a number and its integer power:\n");
	scanf("%lf%d",&number,&power);
	float r = power1(number,power);
	printf("%f\n",r);

	return 0;
}
