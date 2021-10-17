#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,i,SH,SM,EH,EM,h,m;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>SH>>SM>>EH>>EM;
        if(SM>EM){
            m=(60-SM)+EM;
            //cout<<m<<endl;
            if(EH>SH){
                h=EH-SH-1;
            }
            else{
                if(SH==12){
                    h=EH-1;
                }
                else{
                h=12-(SH-EH);
                }
            }
        }
        else{
            m=EM-SM;
            if(EH>SH){
                h=EH-SH;
            }
            else{
                if(SH==12){
                    h=EH;
                }
                else{
                    h=12-EH;
                }
            }
        }
        cout<<h<<" "<<m<<endl;
    }
    return 0;
}
