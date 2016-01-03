#include<stdio.h>
#include <stdbool.h>
#define N 4
void printmatrix(int grid[N][N]) {
	int i,j;
	for (i=0;i<N;i++){
		printf("-----------------------------------\n");
		for(j=0;j<N;j++){
			printf("%d | ",grid[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------------\n");
		
}
bool canGo(int maze[N][N],int row,int col){
	if(row<N && col < N && maze[row][col] == 1)
		return true;
	else 
		return false;
}
bool cansolve(int maze[N][N],int sol[N][N],int row, int col) {
	int i,j;
	if(row == N && col== N){
		sol[row][col]=1;
		return true;
	}
	if(canGo(maze,row,col)){
		sol[row][col]=1;
		if(cansolve(maze,sol,row+1,col))
			return true;
		else if (cansolve(maze,sol,row,col+1))
			return true;
		else 
			return false;
	}
	return false;
}

bool solvedMaze(int maze[N][N]) {
	int sol[N][N] = {{0,0,0,0},
					 {0,0,0,0},
					 {0,0,0,0},
					 {0,0,0,0}};
	if (maze[0][0]==0){
		printf("can't solve maze first element is blocked\n");
		return false;
	}
	if (cansolve(maze,sol,0,0)){
		printmatrix(sol);
		return true;
	} 			 
	else {
				printf("can't solve maze \n");
						printmatrix(sol);
				return false;
	} 	
}

int main(){
	int maze[N][N]  = {{1, 0, 0, 0},
      				   {1, 1, 0, 1},
       			       {0, 1, 0, 0},
        			   {1, 1, 1, 1} };
	if (solvedMaze(maze)){
		printf(" \n Above is path of rat");	
	}
	else {
		printf("No path exist for rat: ");
	}

}