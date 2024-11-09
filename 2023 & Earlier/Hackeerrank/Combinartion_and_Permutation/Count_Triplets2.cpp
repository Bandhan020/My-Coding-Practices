#include <bits/stdc++.h>
using namespace std;

long long int arr[100001];
map<long long int, long long int> map_c, map_b;


int main()
{
    long long int count = 0;
    long long int n, r;

    cin>>n>>r;
    for (int i = 0 ; i < n; i++) {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++) {
        count += map_c[arr[i]];
        map_c[arr[i] * r] += map_b[arr[i]];
        map_b[arr[i] * r]++;
    }

    cout<<count<<endl;
    return 0;
}
