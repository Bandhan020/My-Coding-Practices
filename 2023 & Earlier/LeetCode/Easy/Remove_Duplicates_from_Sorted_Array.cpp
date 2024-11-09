#include <bits/stdc++.h>
using namespace std;

 int removeDuplicates(vector<int>& nums) {
        int i,j,size,k;
        size=nums.size();
        if(!size){
            return 0;
        }
        k=1;
        for(i=1,j=0;i<size;i++){
            if(nums[i]!=nums[j]){
                nums[++j]=nums[i];
                k++;
            }
        }
        return k;
    }

int main()
{
    vector<int>nums;
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>j;
        nums.push_back(j);
    }
    cout<<removeDuplicates(nums)<<endl;
    return 0;

}