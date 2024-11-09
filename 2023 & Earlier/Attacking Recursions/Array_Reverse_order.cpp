//#include <bits/stdc++.h>
//using namespace std;
//
//void print_rev(int i, int n, int *a)
//{
//    if(i<n)
//    {
//        print_rev(i+1, n, a);
//        cout<<a[i]<<" ";
//    }
//}
//
//int main()
//{
//    int i,j=0, n, a[10];
//    cin>>n;
//    for(i=0; i<n; i++){
//        cin>>a[i];
//    }
//    print_rev(j, n, a);
//    cout<<endl;
//    return 0;
//}


#include <bits/stdc++.h>
using namespace std;

void arr(int *a,int i,int n){
    if(i==n){
        return;
    }
    else{

        arr(a,i+1,n);
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[10],i,j=0,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    arr(a,j,n);
    return 0;
}
