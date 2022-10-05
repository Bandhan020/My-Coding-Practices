#include <bits/stdc++.h>
using namespace std;


string addBinary(string a, string b) {
    int arr_length;
    int size_a=a.size();
    int size_b=b.size();
    if(size_a>size_b){
        arr_length=size_a+1;
    }else{
        arr_length=size_b+1;
    }
    int arr_a[arr_length];
    int arr_b[arr_length];
    int result[arr_length];

    int i,j,carry=0,temp;
    for(i=arr_length-1,j=size_a-1;i>=0;i--){
        if(j>=0){
            arr_a[i]=a[j]-'0';
            j--;
            continue;
        }
        arr_a[i]='0'-'0';
    }

    for(i=arr_length-1,j=size_b-1;i>=0;i--){
        if(j>=0){
            arr_b[i]=b[j]-'0';
            j--;
            continue;
        }
        arr_b[i]='0'-'0';
    }
    
    for(i=arr_length-1;i>=0;i--){
        temp=arr_a[i]+arr_b[i]+carry;
        result[i]=temp%2;
        carry=temp/2;
    }

    string res="";
    for(i=0;i<arr_length;i++){
        if(i==0 && result[i]==0){
            continue;
        }
        res+=(result[i]+'0');
    }
    
    return res;

}

int main()
{
    string a,b;
    cin>>a>>b;
    string c=addBinary(a,b);
    cout<<c<<endl;
    return 0;
}