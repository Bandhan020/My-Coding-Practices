/* Solution 1:
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            vector<int> x=image[i];
            reverse(x.begin(),x.end());
            image[i]=x;
        }

        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[i].size();j++)
                image[i][j]^=1;
        }

        return image;
    }

    */





#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>image2(image.size(), vector<int>(image[0].size(),0));
        int i,j,k;
        for(i=0;i<image.size();i++){
            for(j=image[i].size()-1,k=0;j>=0 && k<image[i].size();j--,k++){
                if(image[i][j]==1){
                    image2[i][k]==0;
            }
            else{
                image2[i][k]==1;
            }
        }
    }
    return image2;
}

