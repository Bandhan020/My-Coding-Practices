/*
1. All frequencies are same
2. All are same, One frequency is 1
3. all frequencies are same, only one is higher by 1.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,j,size=s.size();
    int cnt[26]={0};
    int arr[26]={0};
    int s_arr=0;
    for(i=0;i<size;i++){
        cnt[s[i]-'a']++;
    }

    for(i=0,j=0;i<26;i++){
        if(cnt[i]!=0){
            arr[j++]=cnt[i];
        }
    }
    s_arr=j;
    int temp;
//    cout<<s_arr<<endl;
//
//    for(i=0;i<s_arr;i++){
//        cout<<arr[i]<<endl;
//    }
    for(i=0;i<s_arr-1;i++){
        for(j=i+1;j<s_arr;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

   if(arr[0]==arr[s_arr-1]){
    cout<<"YES"<<endl;
   }
   else if(arr[0]==1 && arr[1]==arr[s_arr-1]){
    cout<<"YES"<<endl;
   }
   else if(arr[0]==arr[1] && arr[1]==arr[s_arr-2] && arr[s_arr-2]==arr[s_arr-1]-1){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

    return 0;

}
