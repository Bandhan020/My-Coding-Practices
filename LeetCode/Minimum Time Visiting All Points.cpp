#include <bits/stdc++.h>
using namespace std;



 int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int i,j,m=0,n=0,mintime=0,a,b;
         m=points[0][0];
         n= points[0][1];
        for(i=1;i<points.size();i++){
                a=abs(points[i][0]-m);
                b=abs(points[i][1]-n);
                if(a>b){
                    mintime=mintime+a;
                }
                else{
                    mintime=mintime+b;

                }
                m=points[i][0];
                n=points[i][1];
            }
         return mintime;
    }
