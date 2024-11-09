#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,rq,cq,i,j,score=0;;
    cin>>n>>k>>rq>>cq;
    int *r,*c;
    r=(int*)malloc(k * sizeof(int));
    c=(int*)malloc(k * sizeof(int));
    for(i=0;i<k;i++){
        cin>>r[i]>>c[i];
    }
    for(i=rq,j=cq;i!=n-1||j!=n-1;i++,j++){
        score++;
    }
    for(i=rq,j=cq;i!=0||j!=0;i--,j--){
        score++;
    }
    for(i=rq,j=cq;i!=n-1||j!=0;i++,j--){
        score++;
    }
    for(i=rq,j=cq;i!=0||j!=n-1;i--,j++){
        score++;
    }
    score=2*(n-1)+score;
    cout<<score<<endl;
    return 0;
}
