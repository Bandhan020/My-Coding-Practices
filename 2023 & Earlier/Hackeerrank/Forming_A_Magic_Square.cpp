#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,arr[3][3], mx=100,current;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }


    int arr1[8][3][3]={
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
     };


    for(i=0;i<8;i++){
            current=0;
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                current=current+abs(arr1[i][j][k]-arr[j][k]);
            }
        }
        if(current<mx){
            mx=current;
        }
    }

    cout<<mx<<endl;
    return 0;
}
