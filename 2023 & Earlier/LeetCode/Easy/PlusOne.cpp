#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int i=digits.size()-1;
    for(;i>=0;i--){
        if(digits[i]==9){
        digits[i]=0;
        }
        else{
            digits[i]+=1;
            return digits;
        }
    }

    digits.push_back(0);
    //digits.insert(digits.begin(),1);
    digits[0]=1;
    return digits;
}

int main()
{
    int n,i,input;
    cin>>n;
    vector<int>d;
    vector<int>d1;
    for(i=0;i<n;i++){
        cin>>input;
        d.push_back(input);
    }
    d1=plusOne(d);
    cout<<"[";
    for(i=0;i<d1.size();i++){
        cout<<d1[i]<<",";
    }
    cout<<"]";
    return 0;
}