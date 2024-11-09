#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i=m-1, j=n-1, k=m+n-1; //starting from end
    while(i>=0 && j>=0){
        if(nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        }else {
            nums1[k--] = nums2[j--];
        }
    }
    
    while(i>=0){
        nums1[k--] = nums1[i--];
    }
    
    while(j>=0){
        nums1[k--] = nums2[j--];
    }
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