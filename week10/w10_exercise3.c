#include<stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void printArray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// https://www.geeksforgeeks.org/bubble-sort/
void sort_array(int array[],int size){
    int i, j;
    for (i = 0; i < size-1; i++) {
        // Last i elements are already in place
        for (j = 0; j < size-i-1; j++){
            if (array[j] > array[j+1])
                swap(&array[j], &array[j+1]);
       }
    }
}
int main(){
    int array[MAX_SIZE], size, i;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    if(size<=0 || size > MAX_SIZE){
        printf("Error: invalid size. Size must be between 0 and %d\n",MAX_SIZE);
      return -1;
    }
    srand(NULL);//initialize random seed
    for (i = 0; i < size; i++){
        array[i] = rand()%10;
    }
    printf("array before sort:\n");
    printArray(array,size);

    sort_array(array,size);

    printf("array after sort:\n");
    printArray(array,size);

    return 0;
}
