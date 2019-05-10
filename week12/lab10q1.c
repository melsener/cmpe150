#include <stdio.h>
#include <stdlib.h>

struct Student{
	int id;
	int mid1grade;
	int mid2grade;
	int finalGrade;
	char letterGrade;
};

char letter_grade(float e1, float e2, float e3){
	float avg = (e1*0.3) + (e2 * 0.3) + (e3 * 0.4);

	if(avg < 25)
		return 'F';
	else if (avg < 50)
		return 'C';
	else if (avg < 75)
		return 'B';
	else if (avg <= 100)
		return 'A';
	else
		return 'X';
}

int main() {
	struct Student students[100];

	int n, i;

	scanf("%d", &n);

	for(i = 0; i<n; i++)
	{
		students[i].id = 1000+i;
		scanf("%d", &students[i].mid1grade);
		scanf("%d", &students[i].mid2grade);
		scanf("%d", &students[i].finalGrade);
		students[i].letterGrade = 'I';
	}

	for(i=0; i <n; i++){
		students[i].letterGrade = letter_grade(students[i].mid1grade, students[i].mid2grade, students[i].finalGrade);
	}

	for(i = 0; i<n; i++)
	{
		printf("%d: %c \n",students[i].id, students[i].letterGrade);
	}
	return 0;
}
