#include <bits/stdc++.h>
using namespace std;

 int mysqrt(long long x)
    {

        long long low = 0, high = x, ans, mid;
        while (low <= high)
        {

            mid = (low + high) / 2;

            if (mid * mid == x)
                return mid;

            else if (mid * mid < x)
            {
                low = mid + 1;
                ans = mid;
            }

            else
                high = mid - 1;
        }
        return ans;
    }

    int main(){
        int x;
        cin>>x;
        long int ans=mysqrt(x);
        cout<<ans<<endl;
        return 0;
    }