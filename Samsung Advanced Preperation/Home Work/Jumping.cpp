#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,cont=0;
    cin>>n;
    int *c= malloc(sizeof(int) * n);
    for(i=0;i<n-1;i++)
   {
       cin>>c[i];
    }
    for(i=0;i<n-1;i++)
        {
        if(c[i+2]==0)
            {
            i++;
            cont++;
        }
            else if(c[i+1]==0)
                {
                cont++;
            }
        }

    cout<<cont<<endl;
    return 0;
}
