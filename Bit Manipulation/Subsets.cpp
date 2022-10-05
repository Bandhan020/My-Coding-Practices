#include <iostream>
using namespace std;

void possibleSubsets(string A[], int N)
    {
        for(int i = 0;i < (1 << N); ++i)
        {
            for(int j = 0;j < N;++j)
                if(i & (1 << j))
                    cout << A[j] <<" ";
            cout << endl;
    }
    }


int main()
{
    int N,i;
    cin>>N;
    string arr[N];
    for(i=0;i<N;i++){
        cin>>arr[i];
    }
    possibleSubsets(arr,N);
    return 0;
}
