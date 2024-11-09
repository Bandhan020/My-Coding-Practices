#include <bits/stdc++.h>
using namespace std;]


 int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
            int i,j,countt=0;
            for(i=0;i<startTime.size();i++){
                if(startTime[i]<=queryTime && queryTime<=endTime[i]){
                    countt++;
                }
            }
            return countt;
    }
