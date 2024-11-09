#include <stdio.h>
int main(){
int T;
scanf("%d",&T);
while(T--){
int n;
scanf("%d",&n);
int ans1=n/3;
if(n%3==1) ans1++;
printf("%d %d\n",ans1,(n-ans1)/2);
}
return 0;
}
