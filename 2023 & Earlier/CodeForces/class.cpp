#include<bits/stdc++.h>
using namespace std;

class base{
public:
base(){
  cout<<"this is base"<<endl;
  }
~base();
};

class base1: base{
public:
base1(){
  cout<<"this is base1"<<endl;
  }
~base1();
};


int main()
{
  base1 ob;
}
