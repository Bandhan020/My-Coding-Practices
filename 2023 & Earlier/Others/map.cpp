#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>M;
   M[0]=9;
   M[1]=3;
   M[2]=90;
   map<int,int>:: iterator i;
   for(i=M.begin();i!=M.end();i++)
   {
       cout<<i->first<<" "<<i->second<<endl;
   }
}
