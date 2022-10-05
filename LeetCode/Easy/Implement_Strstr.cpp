//This code exceeds time limits

#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    int i,j,k,initial,success;
    int size_1=needle.size();
    int size_2=haystack.size();
    if(size_1==0){
        return 0;
    }
    else if(size_2==0){
        return -1;
    }
    else{
        for(i=0;i<=(size_2-size_1);i++){
        initial=i;
        k=0;
        success=0;
        for(j=i;j<i+size_1;j++){
            if(haystack[j]!=needle[k]){
                success=-1;
                break;
            }
            k++;
        }
        if(success==0){
            break;
        }
    }
    if(success==-1){
        return -1;
    }else{
        return initial;
    }
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