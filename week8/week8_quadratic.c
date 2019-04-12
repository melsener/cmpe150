#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 0.000001

int solve(float a,float b,float c,float *root1, float *root2){
	float delta = b*b - 4*a*c;
	if(delta>=-EPS && delta<=EPS){
		*root1 = -b/(2*a);
		*root2 = -b/(2*a);
		return 1;
	}
	else if(delta<-EPS){
		return 0;
	}
	else{
		*root1 = (-b + sqrt(delta))/(a*2);
		*root2 = (-b - sqrt(delta))/(a*2);
		return 2;
	}

}

int main(){
	float a,b,c,r1,r2;
	scanf("%f%f%f",&a,&b,&c);

	switch(solve(a,b,c,&r1,&r2)){
		case 0:
			printf("No real roots\n");
			break;
		case 1:
			printf("Equal roots: %f",r1);
			break;
		case 2:
			printf("Two roots r1:%f r2:%f",r1,r2);
			break;
	}

    return 0;
}
