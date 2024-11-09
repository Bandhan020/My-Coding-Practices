#include <bits/stdc++.h>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>output;
        int i,f,v;
        fort(i=0;i<nums.size();i+=2){
            f=nums[i];
            v=nums[i+1];
            j=0;
            while(j<f){
                output.push_back(nums[i+1]);
                j++;
            }
        }
        return output;
    }
