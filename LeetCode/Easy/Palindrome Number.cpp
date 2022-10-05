#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    else{
        int r,sum,n;
        sum=0;
        n=x;
        while(n!=0){
            r=n%10;
            n=n/10;
            sum=sum*10+r;
        }
        if(x==sum){
            return true;
        }
        else{
            return false;
        }
    }

    }


int main()
{
    int x;
    cin>>x;
    cout<<isPalindrome(x)<<endl;
    return 0;

}

