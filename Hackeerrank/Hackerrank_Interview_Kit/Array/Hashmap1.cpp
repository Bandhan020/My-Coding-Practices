#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string>new_map;
    new_map[1]="a";
    new_map[2]="b";
    new_map[3]="c";
    new_map[4]="d";
    new_map[5]="e";

    cout<<new_map[4]<<endl;
    new_map.clear();
    cout<<new_map.size()<<endl;

    for(std::map<int,string>::iterator it=new_map.begin();it!=new_map.end();it++){
        cout<<it->first<<" => "<<it->second<<endl;
    }

    return 0;

}
