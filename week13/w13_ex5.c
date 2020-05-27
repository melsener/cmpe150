#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
struct Book{
	char name[3];
	int page;
	int price;
};

void print_struct(struct Book b){
	printf("%s:%d pages.\n",b.name,b.page);
}

void swap_struct(struct Book *a, struct Book *b){
	struct Book tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort_by_price(struct Book array[], int size){
	for(int i=0;i<size-1;i++){
		for(int j=0; j<size-i-1;j++){
			if(array[j].price > array[j+1].price){
				swap_struct(&array[j],&array[j+1]);
			}
		}
	}
}

int main(void) {
	int n;
	scanf("%d\n",&n);

	struct Book book_array[MAX];
	char tmp[20];
	for(int i=0; i<n;i++){
		fgets(tmp,20,stdin);
		sscanf(tmp,"%d %s %d",&book_array[i].price,book_array[i].name,&book_array[i].page);
	}

	sort_by_price(book_array,n);

	for(int i=0; i<n;i++){
		print_struct(book_array[i]);
	}

	return 0;
}

/*
5
5 fef 200
500 ced 132
543 geg 124
315 mer 634
1211 hat 124
*/
