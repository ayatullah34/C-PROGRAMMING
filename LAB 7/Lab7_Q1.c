#include <stdio.h>

#define N 9
#define UNASSIGNED 0

 // You can add other functions which work with the "solve" function.
int look(int grid[N][N],int row, int col, int Value){
int firstrow;
	int firstcol;
	int loop;
firstrow =(row/3)*3;
firstcol=(col/3)*3;	
	
for(loop=0;loop<N;loop+=1){
	if(grid[row][loop]==Value){
		return 0;
	}
	if(grid[loop][col]==Value){
		return 0;
	}
	if(grid[firstrow+ (loop%3)][firstcol+(loop/3)]==Value){
	return 0;
	}
	}
	return 1;
}



int solve(int grid[N][N],int row,int col) {
	int loop;
	if(row<9 && col<9){
	if(grid[row][col] != 0){
		if((col+1)<9){
			return solve(grid,row,col+1);
		}
		else
		if((row+1)<9) 
			return solve(grid,row+1,0);
		else return 1;
		}
	else{
	for(loop=0;loop<N;loop+=1){
		if(look(grid,row,col,loop+1)){
			grid[row][col]=loop+1;
			if((col+1)<9){
			if(solve(grid,row,col+1))
				return 1;
		else grid[row][col]=0;							
					}
		else if((row+1)<9){
			if(solve(grid,row+1,0))
					return 1;
				else
			grid[row][col]=0;
							
	}
		else return 1;
	}
	}
		return 0;
	}
	}	
	else return 1;
	// Fill this function	
}
//DO NOT CHANGE anything in the "print_grid" function
void print_grid(int grid[N][N]) {
	int row,col;
	for (row = 0; row < N; row++) {
		for (col = 0; col < N; col++) {
			printf("%2d", grid[row][col]);
		}
		printf("\n");
	}
}
//DO NOT CHANGE anything in the "main" function
int main() {
	
	int grid[N][N],i,j;

for( i=0;i<N;i++){

	for(j=0;j<N;j++)
	{
		scanf("%d",&grid[i][j]);
	}

}
	
	if (solve(grid,0,0)) {
		print_grid(grid);
	} 
	else {
		printf("no solution");

	}
	
	return 0;
}
