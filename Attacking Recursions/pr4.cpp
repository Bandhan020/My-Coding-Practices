//#include <bits/stdc++.h>
//using namespace std;
//
//int poly(int x,int n,int i,int sum){
//    if(i==n){
//        return sum;
//    }
//    sum=sum+pow(x,i);
//    poly(x,n,i+1,sum);
//}
//int main()
//{
//    int x,n,i,sum;
//    cin>>x>>n;
//    cout<<poly(x,n,0,0)<<endl;
//    return 0;
//}






//pr3
#include <bits/stdc++.h>
using namespace std;

void poly(int n,int i){
    if(i==n-1){
        cout<<"x^"<<i;
        return;
    }
    cout<<"x^"<<i<<"+";
    poly(n,i+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"1+x+";
    poly(n,2);
    return 0;
}



