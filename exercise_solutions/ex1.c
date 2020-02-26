#include <stdio.h>
int main() 
   {
	float weight_apple, cost_apple, weight_banana, cost_banana, result;
    printf("Weight - Apple: ");
	scanf("%f", &weight_apple);
	printf("KG Price of Apple: ");
	scanf("%f", &cost_apple);
	printf("Weight - Banana: ");
	scanf("%f", &weight_banana);
	printf("KG Price of Banana: ");
	scanf("%f", &cost_banana);
	result = ((weight_apple * cost_apple) + (weight_banana * cost_banana));
	printf("Total Price = %f\n", result);
	return 0;
}