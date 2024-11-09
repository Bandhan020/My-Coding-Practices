/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],n,i,j,sum=0;
    cout<<"Number of input??"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>j;
        arr[i]=j;
        sum=sum+arr[i];
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;

}
*/

#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n)
{
    int sum = 0; // initialize sum

    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < n; i++)
    sum += arr[i];

    return sum;
}

int main()
{
    int arr[] = {12, 3, 4, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of given array is %d", sum(arr, n));
    return 0;
}
