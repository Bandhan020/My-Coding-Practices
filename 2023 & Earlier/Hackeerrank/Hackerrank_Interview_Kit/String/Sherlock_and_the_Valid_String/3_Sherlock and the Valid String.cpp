/* Note:

1. All letters should have same frequency(If max and min are same then also it is valid string)
2. if difference between min & max is 1, then it can be valid
3. Difference between common(count of max) and uncommon (count of min) should be 1

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len=str.length();
    int arr[26]={0};

    for(int i=0;i<26;i++){
        arr[str[i]-'a']++;
    }

    int max=0;
    int min=10000000;

    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max=str[i];
        }
        if(arr[i]<min && arr[i]!=0){
            min=str[i];
        }
    }

     for(int i=0;i<26;i++){
        if(arr[i]!=0){
            if(arr[i]==max || arr[i]==min){
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
        }
     }

    if(max==min){
        cout<<"YES"<<endl;
    }
    else{
         int freq_max=0;
         int freq_min=0;
         for(int i=0;i<26;i++){
            if(arr[i]==max){
                freq_max++;
            }
            if(arr[i]==min){
                freq_min++;
            }
         }

         if(max-min!=1){
            if(min==1 && freq_min==1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
         }
         else{
            if(freq_min==1 || freq_max==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
         }
    }

    return 0;
}
