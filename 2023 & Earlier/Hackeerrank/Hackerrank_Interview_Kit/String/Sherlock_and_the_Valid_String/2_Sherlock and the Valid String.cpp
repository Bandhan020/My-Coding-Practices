#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int s=a.size();
    int i,j,max=INT_MIN,min=INT_MAX,min_count=0,max_count=0,mn=0,mx=0;
    int cnt[26];
    memset(cnt,0,sizeof(cnt));
    for(i=0;i<s;i++){
        cnt[a[i]-'a']++;
    }

    for(i=0;i<26;i++){
        if(cnt[i]>max){
            max=cnt[i];
        }
    }

    for(i=0;i<26;i++){
        if(cnt[i]!=0 && cnt[i]<min){
            min=cnt[i];
        }
    }

   // cout<<"max ="<<max<<"     min= "<<min<<endl;

   for(i=0;i<26;i++)
   {
       if(cnt[i]!=0){
       if(cnt[i]>min){
            if((cnt[i]-min)==1){
                min_count++;
                if(min_count>1){
                    //cout<<"Difference = "<<(cnt[i]-min)<<endl<<"Min Count ="<<min_count<<endl;
                    mn=1;
                    break;
                }
            }
            else if((cnt[i]-min)>1){
                    mn=1;
                    break;
            }
       }
       }
   }

    for(i=0;i<26;i++)
   {
       if(cnt[i]!=0){
       if(cnt[i]<max){

            max_count++;
            if(max_count>1){
                mx=1;
                 //cout<<endl<<"Max Count ="<<max_count<<endl;
                break;
            }
            else if(max_count==1){
                if((max-cnt[i])>1){
                    //cout<<endl<<"Difference = "<<(max-cnt[i])<<endl;
                    mx=1;
                    break;
                }
            }
       }
   }
   }

   if(mn==1 && mx==1){
            cout<<"NO"<<endl;
       }
       else if(mn==0 || mx==0){
            cout<<"YES"<<endl;
       }

   return 0;
}
