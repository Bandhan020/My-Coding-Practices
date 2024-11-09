//This code also exceeds time limits without no reason
//Below Commented code works fine with same logic

#include <bits/stdc++.h>
using namespace std;


int strStr(string haystack, string needle) {
    int i,j,flag=-1;
    for(i=0;i<haystack.length();i++){
        if(haystack[i]==needle[0]){
            int k=1;
            for(j=i+1;j<haystack.length();j++){
                if(haystack[j]==needle[k]){
                    k++;
                }
                else{
                    break;
                }   
            }
            if(k==needle.length()){
                flag=i;
                break;
            }
        }
    }
    if(needle.length()==0){
        flag=0;
    }
    if(flag!=-1){
        return flag;
    }   
    else{
        return -1;
    }      
}



int main()
{
    string haystack,needle;
    haystack=" ";
    needle=" ";
    cin>>haystack>>needle;
    int i,j;
    cout<<strStr(haystack,needle)<<endl;
    return 0;
}

// int i,j,flag=-1;
// for(i=0;i<haystack.length();i++){
// if(haystack[i]==needle[0]){
// int k=1;
// for(j=i+1;j<haystack.length();j++){
// if(haystack[j]==needle[k])
// k++;
// else
// break;
// }
// if(k==needle.length()){
// flag=i;
// break;
// }
// }
// }
// if(needle.length()==0)
// flag=0;
// if(flag!=-1)
// return flag;
// else
// return -1;
// }