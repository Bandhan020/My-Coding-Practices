#include <bits/stdc++.h>
using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    int i,j,temp,result=0;
for (int i=0; i <arr.size(); i++)
    {
        // Pick ending point
        temp=0;
        for (int j=i; j<arr.size(); j++)
        {
            // sum subarray between current
            // starting and ending points
            temp+=arr[j];
            if(i%d==0 && j%d==0){
                result=result+temp;
            }
            else if(i%d!=0 && j%d!=0){
                result=result+temp;
            }
        }
    }
    return result ;
}
