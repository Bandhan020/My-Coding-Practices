#include <bits/stdc++.h>
using namespace std;

double getAverage(int arr[], int size) {
  int i, sum = 0;
  double avg;

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;

   return avg;
}

int main () {
   // an int array with 5 elements.
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   // pass pointer to the array as an argument.
   avg = getAverage( balance, 5 ) ;

   // output the returned value
   cout << "Average value is: " << avg << endl;

   return 0;
}

// int element(int n,int *arr){
//     int sum=sum + arr[0];
//     return sum;
// }

// int main()
// {
//     int arr[100];
//     int n,i,j;
//     cin>>n;
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<element(3,arr);
//     return 0;

// }

