#include <bits/stdc++.h>
using namespace std;

int is_prime(int c){
        int p=1;
        for(int j=2; j<=(c/2); j++){
            if(c%j==0){
                p=0;
            }
        }
        return p;
}
int capital(int p){
    int f=p+1,b=p-1;
    int d=-1,e=-1;
     while(b>64 || f<91){

               if(f<=90 && f>=65) d=is_prime(f);
               if(b>=65 && b<=90) e=is_prime(b);

                if(d==1 && e==1){
                    if(f<b){
                    return f;
                    }
                    else{
                    return b;
                    }
                }
                else if(d==1){
                    return f;
                }
                else if(e==1){
                    return b;
                }

            f++;
            b--;
    }
}
int small(int p){
    int f=p+1,b=p-1;
    int d=-1,e=-1;
     while(b>96 || f<123){

               if(f<=122 && f>=97) d=is_prime(f);
               if(b>=97 && b<=122) e=is_prime(b);

                if(d==1 && e==1){
                    if(f<b){
                    return f;
                    }
                    else{
                    return b;
                    }
                }
                else if(d==1){
                    return f;
                }
                else if(e==1){
                    return b;
                }
             f++;
             b--;
    }
}
int main()
{
    int T,N,i,j,c,d,e;
    cin>>T;
    for(j=0;j<T;j++){
    cin>>N;
    string S;
    cin>>S;
    char f,b;

    int p;

    for(i=0;i<N;i++){
        p=S[i];
        c=is_prime(p);
        if(c==0){
            f=p+1;
            b=p-1;
            int ans;
            int ans1 = capital(p);

            int ans2 = small(p);
            //cout<<(char)p<<endl;

            if(abs(p-ans1) > abs(p-ans2)) ans=ans2;
            else ans = ans1;

           cout<<(char)ans;
        }
        else if( c!=0 && (S[i]>='A' && S[i]<='Z') || (S[i]>='a' && S[i]<='z')) {
           cout<<S[i];
        }
        else{
            f=p+1;
            b=p-1;
            int ans;
            int ans1 = capital(p);

            int ans2 = small(p);

            if(abs(p-ans1) > abs(p-ans2)) ans=ans2;
            else ans = ans1;
            cout<<(char)ans;
        }
    }
    cout<<endl;
    }
    return 0;
//    cout<<S<<endl;

}


