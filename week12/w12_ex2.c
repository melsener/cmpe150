// taken from https://www.programiz.com/c-programming/examples/swapping-cyclic-order
#include <stdio.h>

void cyclicSwap(int *n1, int *n2, int *n3) {
    // n1 -> n3, n2 -> n1, n3 -> n2
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    cyclicSwap(&a, &b, &c);
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}

