#include<bits/stdc++.h>
using namespace std;

int range(int n, int x, int y)
{
return (x <= n && x > 0 && y <= n && y > 0);
}

int check(int n, int x, int y, int xx, int yy,
				map <pair<int, int>, int> mp)
{
int ans = 0;

while (range(n, x, y) && ! mp[{x, y}])
{
	x = x + xx;
	y = y + yy;
	ans++;
}

return ans;
}

int numberofPosition(int n, int k, int x, int y,
				int obstPosx[], int obstPosy[])
{
int x1, y1, ans = 0;
map <pair<int, int>, int> mp;


while(k--)
{
	x1 = obstPosx[k];
	y1 = obstPosy[k];

	mp[{x1, y1}] = 1;
}


ans = ans + check(n, x + 1, y, 1, 0, mp);
ans = ans + check(n, x-1, y, -1, 0, mp);
ans = ans + check(n, x, y + 1, 0, 1, mp);
ans = ans + check(n, x, y-1, 0, -1, mp);
ans = ans + check(n, x + 1, y + 1, 1, 1, mp);
ans = ans + check(n, x + 1, y-1, 1, -1, mp);
ans = ans + check(n, x-1, y + 1, -1, 1, mp);
ans = ans + check(n, x-1, y-1, -1, -1, mp);

return ans;
}

int main()
{
int n,k,rq,cq,i;
cin>>n>>k>>rq>>cq;
int r[k],c[k];
for(i=0;i<k;i++){
    cin>>r[i]>>c[i];
}

cout << numberofPosition(n, k, rq, cq,
				r, c) << endl;
return 0;
}

