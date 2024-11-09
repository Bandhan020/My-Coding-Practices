#include <stdio.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i,j,k,sum;
        vector<int>countt(nums.size());
        for(i=0,k=0;i<nums.size();i++){
                sum=0;
            for(j=0;j<nums.size();j++){
                if(nums[j]<nums[i]){
                    sum++;
                }
            }
        countt[k++]=sum;
        }
        return countt;
    }
