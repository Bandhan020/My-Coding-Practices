
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str[100000];
	int T;
	cin>>T;
	for(int m=0;m<T;m++){
	cin>>str;
	int n=strlen(str), cont=0;
	for (int len = 1; len <= n; len++)
	{
		for (int i = 0; i <= n - len; i++)
		{
			int j = i + len - 1;
			for (int k = i; k <= j; k++)
				if(str[k]=='a'||str[k]=='e'||str[k]=='i'||str[k]=='o'||str[k]=='u'||str[k]=='A'||
                str[k]=='E'||str[k]=='I'||str[k]=='O'||str[k]=='U')
                {
                    cont++;
                }
		}
	}
    cout<<cont<<endl;
	}
	return 0;
}

