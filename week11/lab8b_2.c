#include <stdio.h>
#include <stdlib.h>
#define MAX 150

void wordfinder(char str1[], int x,char str2[])
{
	int wcounter =0;
	int i=0;
	int idx2 = 0;

	if(x==1)
	{
		// look for first space
		while(str1[i]!='\0' && str1[i]!=' ' ){
			str2[idx2] = str1[i];
			i++;
			idx2++;
		}
		str2[idx2] = '\0';
		return;

	}

	for(i=0;str1[i]!='\0';i++){
		if(str1[i]==' ')
		{
			wcounter++;
			if(wcounter == x-1)
				break;
		}
	}
	i++;


	while(str1[i]!=' ' && str1[i]!='\0'){
		str2[idx2] = str1[i];
		idx2++;
		i++;

	}
	str2[idx2] = '\0';
}

int main(void) {

	char str1[MAX],str2[MAX];
	int num;
	fgets(str1,MAX,stdin);
	scanf("%d",&num);
	wordfinder(str1,num,str2);
	printf("%s",str2);
	return 0;
}
