#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,k,p,q;
 cin>>n>>k>>p>>q;
 int pq=p/q;
  int A[n+2];
  for(int i=0;i<n;i++){
    cin>>A[i];
  }

  int cnt=0;
  for(int i=0;i<n;i++)
  {

      for(int j=0;j<n;j++){
        if(A[i]/A[j]>pq) cnt++;
      }
  }
  cout<<cnt<<endl;
}
