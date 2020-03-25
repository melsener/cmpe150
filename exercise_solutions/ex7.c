
#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i = 0; i<=n; i++){
		if((i%2 == 0) || (i%3 == 0))
		{
			if(i%6 != 0){
				printf("%d ",i);
			}
		}
	}
	return 0;
}
