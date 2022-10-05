//Linear Solution

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int i,sum,maxSum,nums_Size;
    nums_Size=nums.size();
    sum=0;
    maxSum=nums[0];
    for(i=0;i<nums_Size;i++){
        sum=sum+nums[i];
        if(sum>maxSum){
            maxSum=sum;
        }
        if(sum<0){
            sum=0;
            continue;
        }
    }
    return maxSum;

}

int main()
{
    int i,j,n;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>j;
        v.push_back(j);
    }
    cout<<maxSubArray(v);
    return 0;
}