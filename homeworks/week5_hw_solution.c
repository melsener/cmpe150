#include <stdio.h>

int main(){
	//Check http://sites.math.rutgers.edu/~greenfie/gs2004/euclid.html for formal description of the algorithm

	int a,b,r;
	//assume a>=b
	scanf("%d%d",&a,&b);
	
	while(b>0){
		r = a%b;
		a = b;
		b = r;
	}
	printf("%d\n",a);
}