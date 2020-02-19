#include <stdio.h>

int main(){
	int a,b;

	scanf("%d%d",&a,&b);
	int could_this_be_better = a/b;
	float maybe_better = a/b;
	float the_best = (a * 1.0)/b;

	printf("%d\n",could_this_be_better);
	printf("%f\n",maybe_better);
	printf("%f\n",the_best);
	return 0;
}