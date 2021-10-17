#include <bits/stdc++.h>
using namespace std;

//int main()
//{
//    char str[100],temp;
//	int i=0, j;
//	cout<<"Enter the String : ";
//	cin>>str;
//	j=strlen(str)-1;
//	while(i<j)
//	{
//		temp=str[i];
//		str[i]=str[j];
//		str[j]=temp;
//		i++;
//		j--;
//	}
//	cout<<"Reverse of the String = "<<str;
//
//    return 0;
//}
//

//Alternative:
int main()
{
    char a[100],b[100];
    int i,j,l=0,c=0;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    b[0]='\0';

    for(i=l-1,j=0;i>=0;i--,j++){
        b[j]=a[i];
    }
    cout<<b<<endl;

    for(i=0;i<l;i++){
        if(a[i]!=b[i]){
            c=1;
            break;
        }
    }
    if(c==0){
        cout<<"Palindrom"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;

}
