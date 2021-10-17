#include <bits/stdc++.h>
using namespace std;

 int largestAltitude(vector<int>& gain) {
        vector<int>height(gain.size()+1);
        int i,j;
        height[0]=0;
        int maxx=height[0];
        for(i=0;i<gain.size();i++){
            height[i+1]=height[i]+gain[i];
            if(height[i+1]>maxx){
                maxx=height[i+1];
            }
        }
        return maxx;
    }
