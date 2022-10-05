#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=0,j=0;
    vector<int>results;
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]){
            results.push_back(nums1[i]);
            i++;
        }
        if(nums2[j]<nums1[i]){
            results.push_back(nums2[j]);
            j++;
        }
    }
    if(i<m){
    while(i<m){
        results.push_back(nums1[i]);
        i++;
    }
    }
    if(j<n){
    while(j<n){
        results.push_back(nums2[j]);
        j++;
    }
    }
    
    nums1=results;    
}

int main()
{
    int i,j,m,n,k,l,temp,s1,s2;
    vector<int>nums1,nums2,nums3;
    cin>>s1>>s2;
    for(i=0;i<s1;i++){
        cin>>temp;
        nums1.push_back(temp);
    }
    for(i=0;i<s2;i++){
        cin>>temp;
        nums2.push_back(temp);
    }
    cin>>m>>n;
    merge(nums1,m,nums2,n);
    for(i=0;i<(m+n);i++){
        cout<<nums1[i]<<endl;
    }
    return 0;

}