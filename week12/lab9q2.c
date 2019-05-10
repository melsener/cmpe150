#include <stdio.h>
#include <stdlib.h>
int main() {
	int board[8][8],x,y;
	int i,j;
	for(i = 0;i<8;i++){
		for(j=0;j<8;j++){
			scanf("%d",&board[i][j]);
			if(board[i][j]==8){
				y=i;
				x=j;
			}
		}
	}

	for(i = 0; i<8 ;i++){
		if(y+i<8 && board[y+i][x]==1){
			board[y+i][x]=8;
			board[y][x]=0;
			break;
		}
		else if(y-i>=0 && board[y-i][x]==1){
			board[y-i][x]=8;
			board[y][x]=0;
			break;
		}


		else if(x-i>=0 && board[y][x-i]==1){
			board[y][x-i]=8;
			board[y][x]=0;
			break;
		}


		else if(x+i<8 && board[y][x+i]==1){
			board[y][x+i]=8;
			board[y][x]=0;
			break;
		}

	}

	for(i = 0;i<8;i++){
		for(j=0;j<8;j++){
			printf("%d ",board[i][j]);
		}
		printf("\n");
	}

	return 0;
}
