#include <bits/stdc++.h>
#define N 8
using namespace std;
int mat[N][N];
//simple travelling that works for square matrix
int row[N] = {2, 1, -1, -2, -2, -1, 1, 2 };
int col[N] = {1, 2, 2, 1, -1, -2, -2, -1 };
bool isValid(int r,int c){
	return (r>=0 && c>=0 && r<N && c<N && mat[r][c] == -1);
}
bool knight_tour(int r,int c,int move){
	if(move == N*N)
		return true; // base condition
	int move_x, move_y;
	for(int k = 0;k<N;k++){
		move_x = r + row[k];
		move_y = c + col[k];
		if(isValid(move_x,move_y)){
			mat[move_x][move_y] = move + 1; //storing the move number in matrix
			if(knight_tour(move_x,move_y,move + 1) == 1)return true;
			else mat[move_x][move_y] = -1;//backtracking
		}
	}
	return false;
}
int main() {
	// your code goes here
	memset(mat,-1,sizeof(mat));
	mat[0][0] = 1;
	if(knight_tour(0,0,1)){//calling recur function
	//print the path matrix
	for(int i = 0;i<N;i++)
		{
			for(int j = 0;j<N;j++)
				cout<<mat[i][j]<<"  ";
			cout<<endl;
		}
	}
	else cout<<"Not possible\n";
	return 0;
}
