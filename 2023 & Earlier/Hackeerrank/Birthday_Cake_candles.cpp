#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> ar) {
    int n=0,c=0,i;
    for(i=0;i<ar.size();i++){
           if(ar[i]>n){
           n=ar[i];
           }
    }
    for(i=0;i<ar.size();i++){
           if(n==ar[i]){
             c++;
           }
    }
    return c;
}

int main()
{
    vector<int>candle;
    int n,p,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p;
        candle.push_back(p);
    }
    cout<<birthdayCakeCandles(candle);
    return 0;
}
