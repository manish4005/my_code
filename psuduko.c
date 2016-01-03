#include <stdio.h>
#include <stdbool.h>
#define N 9
bool FindEmpyLocation(int grid[N][N], int *row , int *col);

bool issafe(int grid[N][N],int row, int col,int num);


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

bool issafe(int grid[N][N],int row, int col,int num){
	int i,j;
	for (i=0;i<N;i++){
		if (grid[i][col]==num)
			return false;
	}	
	
	for (i=0;i<N;i++){
		if (grid[row][i]==num)
			return false;
	}	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (grid[i+(row-row%3)][j+(col-col%3)]==num)
			   return false;
		}
	}
	return true;
}

bool FindEmpyLocation(int grid[N][N], int *row, int *col){
	int i,j;
	for (i=0;i<N;i++)
		for(j=0;j<N; j++){
			if (grid[i][j]==0){
				*row = i;
				*col = j;
				return true;
			}
		}
	return false;
}
bool isPsudukoSolved(int grid[N][N]){
	int row,col,num;
	if(!FindEmpyLocation(grid,&row,&col))
		return true;
	for (num=1;num <10;num++){
		if (issafe(grid,row,col,num)){
			grid[row][col]=num;
			if (isPsudukoSolved(grid)){
				return true;
			}
			else
				grid[row][col]=0;
		}
	}
	return false;
}
/*
testfun(int& r){
	r = 10;
}*/

int main() {
	 int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
	
		 
	printmatrix(grid);
	printf("\n");
	if (!isPsudukoSolved(grid))
	 	printf ("Isse na ho payega\n");
	 else 
	 	printmatrix(grid);

}