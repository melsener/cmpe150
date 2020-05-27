#include <stdio.h>

typedef struct Point{
	int x;
	int y;
} point;

void print_point(point p){
	printf("%d %d\n",p.x,p.y);
}

void call_by_val(point p){
	p.x = 0;
	p.y = 0;
}

void call_by_ref(point * p){
	p->x = 0;
	p->y = 0;
}

int main(){
	point a = {3,4};
	
	call_by_val(a);
	print_point(a);

	call_by_ref(&a);
	print_point(a);

	return 0;
}