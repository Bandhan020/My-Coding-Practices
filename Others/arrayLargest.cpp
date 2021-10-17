#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n)
{
    int large;

    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < n-1; i++)
    if(arr[i]>arr[i+1]){
        large=arr[i];
    }
    else
    {
        large=arr[i+1];
    }
    return large;
}

int main()
{
    int arr[] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;
    printf("Largest element of  array is %d", sum(arr, n));
    return 0;
}
