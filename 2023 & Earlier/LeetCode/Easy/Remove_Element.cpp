//This code doesn't pass all Test Case


#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int i,j,k,s,temp,flag=0;
        k=0;
        s=nums.size();
        j=s-1;
        if(s==1){
            if(nums[0]==val){
                return k;
            }
            else{
                return ++k;
            }
        }
        else if(s==0){
            return 0;
        }
        else{
            for(i=0;i<j;i++){   
            if(nums[i]==val){
                flag=1;
                while(nums[j]==val){
                    if(j-1==i){
                        break;
                    }
                    j--;
                }
                if(nums[j]!=val){
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    k++;
                }

            }
            else{
                k++;
            }
        }
        // if(flag==0){
        //     if(nums[j]==val && nums[i]!=val){
        //         return k;
        //     }else{
        //         k++;
        //      }
        // }
         cout<<"[";
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<", ";
        }
        cout<<"]"<<endl;
        return k;
        }
        
       
        
    }


int main()
{
    vector<int>nums;
    int n,i,j,val;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>j;
        nums.push_back(j);
    }
    cin>>val;
    cout<<removeElement(nums,val)<<endl;
    return 0;
}