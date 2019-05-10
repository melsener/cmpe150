#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Person{
	char name[10];
	int age;
};

struct House{
	struct Person persons[3];
	char houseName[10];
};

struct Block{
	struct House houses[5];
};

int main(void) {
	//read and find the oldest here
	struct Block b[2];

	struct Person oldest;
	oldest.age = -1;

	int houseid = -1;
	int blockno = -1;

	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			scanf("%s",b[i].houses[j].houseName);
			for(k=0;k<3;k++){
				scanf("%s%d",b[i].houses[j].persons[k].name,&b[i].houses[j].persons[k].age);
				if(b[i].houses[j].persons[k].age > oldest.age){
					oldest.age = b[i].houses[j].persons[k].age;
					strcpy(oldest.name,b[i].houses[j].persons[k].name);
					houseid = j;
					blockno = i;
				}
			}
		}
	}

	printf("%s of house %s is %d years old.\n",oldest.name,b[blockno].houses[houseid].houseName,oldest.age);

	return 0;
}

/*
SAMPLE INPUT
HouseA
Rowina 3
Laraine 5
Hilary 33
HouseB
Lenard 29
Damion 88
Kacie 32
HouseC
Fleur 25
Belle 17
Samantha 8
HouseD
Chance 6
Van 97
Carlene 33
HouseE
Trixie 33
Donna 63
Iona 77
HouseF
Wisdom 45
Jojo 54
Sherie 89
HouseG
Cherise 34
Fabian 12
Clyde 11
HouseH
Hewie 15
Waldo 17
Algernon 43
HouseI
Oli 42
Kathlyn 9
Heaven 0
HouseJ
Gus 9
Corrina 12
Talbot 12
 */
