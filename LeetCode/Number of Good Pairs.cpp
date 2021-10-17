#include <bits/stdc++.h>
using namespace std;




int numIdenticalPairs(vector<int>& nums) {
        vector<int>checkk(nums.size());
        int i,j,countt=0;
        for(i=0;i<nums.size()-1;i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    countt++;
                }
            }
        }
        return countt;
    }
