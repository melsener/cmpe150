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

int main(void) {
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
/* Sample input
85 11 92
63 78 68
77 24 67
36 33 55
79 29 73
19 8 8
90 63 45
73 51 40
8 21 30
48 38 70
81 62 59
45 75 53
81 54 49
99 19 41
52 31 1
76 73 77
69 88 46
52 72 74
28 14 15
46 6 14
31 36 14
92 8 88
81 36 66
50 44 51
88 2 41
38 75 8
20 52 66
24 92 4
50 1 90
49 42 27
39 13 47
25 55 37
65 37 79
5 90 68
70 56 47
68 60 53
78 66 38
74 6 10
61 79 44
92 19 20
98 17 72
86 16 58
85 42 20
72 27 78
7 57 70
88 58 15
41 4 22
100 83 31
58 92 99
32 17 100
34 85 100
24 1 18
13 30 74
26 86 39
85 89 94
19 14 93
72 22 3
63 71 37
19 49 79
61 39 0
43 100 56
95 85 100
59 49 84
4 80 30
75 65 32
99 61 9
50 86 45
31 27 63
56 46 100
91 79 51
40 6 7
73 32 52
25 3 25
84 86 81
17 64 33
94 23 75
17 41 50
3 91 58
100 32 6
87 88 36
26 3 93
74 29 21
14 49 88
21 82 9
90 8 21
10 56 40
7 76 51
55 23 32
57 80 2
14 75 78
24 15 51
96 77 57
6 10 50
67 92 99
25 94 68
7 13 63
27 70 5
52 99 68
1 52 94
49 18 86

*/
