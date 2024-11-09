#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int i,j,match=0;
    int arr[10000];
    //memset(arr,0,sizeof(arr));
    cin>>a>>b;
    int s1=a.size();
    int s2=b.size();
    if(a!=b){
        for(i=0;i<s1;i++){
            for(j=0;j<s2;j++){
                if(a[i]==b[j]){
                    if(arr[j]!=0){
                        continue;
                    }
                    match++;
                    arr[j]=1;
                    break;
                }
            }
        }
    }
    //cout<<match<<endl;
    int deletion=(s1-match)+(s2-match);
    cout<<deletion;
    return 0;

}
