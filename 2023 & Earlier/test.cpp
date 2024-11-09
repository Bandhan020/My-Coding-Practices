#include <iostream>
using namespace std;


string shopwstring(string arr[]){

    string temp,result="";
    int i=0,j;
    while(i<4){
        temp=arr[i];
        cout<<temp<<endl;
        for(j=0;j<temp.size();j++){
            cout<<temp[j]<<" ";
            result=result+temp[j];
        }
        cout<<endl;
            i++;
    }
    return result;

}

int main()
{

    string arr[4];
    int i;
    for(i=0;i<4;i++){
        cin>>arr[i];
    }
    cout<<"Now returning from function" <<endl<<shopwstring(arr);
    return 0;
}
