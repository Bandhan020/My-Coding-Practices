#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
      int i,v_size,pos;
      v_size=nums.size();
      for(i=0;i<v_size;i++){
          if(target==nums[i]){
              return i;
          }
          else{
            if(target>nums[i]){
            pos=i+1;
          }
          else if(i==0 && target<nums[i]){
            pos=0;
          }
          }
          
      }
      return pos;
}

int main()
{
    int i,j,n,k,target;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    cin>>target;
    cout<<searchInsert(v,target)<<endl;
    return 0;
}