#include <stdio.h>

struct Point{
	int x;
	int y;
};

void print_point(struct Point p){
	printf("%d %d\n",p.x,p.y);
}

struct Point doubled_point(struct Point p){
	struct Point new_point;
	new_point.x = p.x * 2;
	new_point.y = p.y * 2;
	return new_point;
}

int main(){
	struct Point a;
	a.x = 1;
	a.y = 1;

	print_point(a);
	struct Point b = a; 	// assignment is valid.

	print_point(b);			// void function with sturct

	struct Point c = doubled_point(a); // function returning struct

	print_point(c);

	struct Point d = {3,4}; // you can initialize like this

	print_point(d);
	return 0;
}

