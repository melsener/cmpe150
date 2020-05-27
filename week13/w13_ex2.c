#include <stdio.h>

struct Person{
	int age;
	char name[10];
};

typedef struct Person person; // you can also use typedef like this

void print_person(person p){
	printf("%s is %d years old.\n",p.name,p.age);
}

int main(){
	person a = {18, "Jean"};
	printf("Printing person a:\n");
	print_person(a);

	person * b = &a;	// using address operator is valid
	printf("Printing person * b:\n");
	print_person(*b);

	b->age = 58;

	printf("Printing person a:\n");
	print_person(a);

	printf("Printing person * b:\n");
	print_person(*b);

	return 0;
}
