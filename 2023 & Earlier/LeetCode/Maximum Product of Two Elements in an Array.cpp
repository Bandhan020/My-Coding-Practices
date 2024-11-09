#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
        int i,j,maxx=0;
        for(i=0;i<nums.size()-1;i++){
            for(j=i+1;j<nums.size();j++){
                if((nums[i]-1)*(nums[j]-1)>maxx){
                    maxx=(nums[i]-1)*(nums[j]-1);
                }
            }
        }
        return maxx;
    }
