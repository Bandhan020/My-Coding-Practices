#include <bits/stdc++.h>
using namespace std;

int n_of_digit(int a){
    int countt=1;
    while((a/10)!=0){
        cout<<(a/10)<<endl;
        a=a/10;
        cout<<a<<"\t";
        countt++;
        cout<<countt<<endl;
    }
   return countt;
}

int  main(){
int b=21;
cout<<n_of_digit(b);
return 0;

}






//int findNumbers(vector<int>& nums) {
//        int i,c=0;
//        for(i=0;i<nums.size();i++){
//            if(n_of_digit(nums[i])%2==0){
//                c++;
//            }
//        }
//        return c;
//    }
