#include<stdio.h>
int C[27], cnt;
char p[101000];
void Chk(){
    int i, t = 0;
    for(i=0;i<26;i++){
        if(!C[i])continue;
        if(!t)t=C[i];
        if(t && t!=C[i])break;
    }
    if(i==26)cnt++;
}
int main()
{
    int i;
    scanf("%s",p);
    for(i=0;p[i];i++)C[p[i]-'a']++;
    Chk();
    for(i=0;i<26;i++){
        if(C[i]>0){
            C[i]--;
            Chk();
            C[i]++;
        }
    }
    if(cnt)printf("YES\n");
    else printf("NO\n");
}
