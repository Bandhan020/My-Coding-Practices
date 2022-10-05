#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i,j,k;
    k=0;
    j=0;
    for(i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[j]=nums[i];
            j++;
            k++;
        }
    }
    return k;
}


int main()
{
    int n,i,j,val;
    vector<int>nums;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>j;
        nums.push_back(j);
    }
    cin>>val;
    cout<<removeElement(nums,val)<<endl;
    return 0;
}