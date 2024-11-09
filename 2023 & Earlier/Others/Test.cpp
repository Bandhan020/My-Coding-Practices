#include<bits/stdc++.h>
using namespace std;

int  sum(int c)
{
    int ss=0;
    for(int i=1;i<=c;i++) {
        ss=ss+i;
    }
   return ss;

}

int main()
{
    int a;
    cin>>a;
    int k=sum(a);
    cout<<"k niye kisu korbo:"<<k<<endl;
}
