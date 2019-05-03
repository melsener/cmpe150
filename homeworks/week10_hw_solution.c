#include <stdlib.h>
#include <stdio.h>
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

void sort_array(int arr[], int size){
    int i, j;
    for (i = 0; i < size; i++)
        for (j = i + 1; j < size; j++)
            if (arr[i] > arr[j])
                swap(&arr[i],&arr[j]);
}

int binary_search(int array[],int size,int num){
	int left=0, right= size-1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (array[mid] == num)
			return mid;

		if (array[mid] < num)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}


int main(){
    int array[MAX_SIZE], size, i, searchedNumber,searchedNumberIndex;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    if(size<=0 || size > MAX_SIZE){
        printf("Error: invalid size. Size must be between 1 and %d\n",MAX_SIZE);
      return -1;
    }

    for (i = 0; i < size; i++){
        array[i] = rand()%10;
    }

    printf("array before sort:\n");
    printArray(array,size);

    sort_array(array,size);

    printf("array after sort:\n");
    printArray(array,size);

    printf("Enter a number for searching within the array:\n");
    scanf("%d",&searchedNumber);

    searchedNumberIndex = binary_search(array,size,searchedNumber);

    if(searchedNumberIndex == -1){
        printf("value not found\n");
    }
    else{
        printf("value found at index %d\n",searchedNumberIndex);
    }
    return 0;
}
