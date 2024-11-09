#include <bits/stdc++.h>
using namespace std;

int count_digit(int number){
    int n=0;
    while(number!=0){
        number=number/10;
        n++;
    }
    return n;
}

int main()
{
    int num,i,r,d,j,k;
    cin>>num;
    string sol="";
    map<int,string>roman;
    roman[1]="I";
    roman[2]="II";
    roman[3]="III";
    roman[4]="IV";
    roman[5]="V";
    roman[6]="VI";
    roman[7]="VII";
    roman[8]="VIII";
    roman[9]="IX";
    roman[10]="X";
    roman[50]="L";
    roman[100]="C";
    roman[500]="D";
    roman[1000]="M";

    i=count_digit(num)-1;
    while(num!=0){
        d=pow(10,i);
        r=num/d;
        j=r;
        if(r>=1 && r<=3){
            for(j=r;j>0;j--){
                sol+=roman[d];
            }
        }
        else if(r==4 || r==9){
            sol+=roman[d];
            sol+=roman[(r+1)*d];
        }
        else if(r>=5 && r<=8){
            k=r-5;
            sol+=roman[5*d];
            for(j=k;j>0;j--){
                sol+=roman[d];
            }
        }
        else if(r==num){
            sol+=roman[num];
        }
        num=num%d;
        i--;
    }

    cout<<sol<<endl;
    return 0;
}
