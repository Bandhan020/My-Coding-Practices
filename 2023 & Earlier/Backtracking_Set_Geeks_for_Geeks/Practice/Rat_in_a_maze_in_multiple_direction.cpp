#include <bits/stdc++.h>
using namespace std;
#define MAX 5

int visited[row][column];
int mat[MAX][MAX] = { { 1, 0, 0, 0, 0 },
                        { 1, 1, 1, 1, 1 },
                        { 1, 1, 1, 0, 1 },
                        { 0, 0, 0, 0, 1 },
                        { 0, 0, 0, 0, 1 } };

bool is_valid(int x,int y){
    if(x>=0 && x<MAX && y>=0 && y<MAX && mat[x][y]==1){
        return true;
    }
    return false;
}

int main()
{


}
