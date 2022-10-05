if(x<0){
            return false;
        }
        else{
            int i,j,r,n,c=0;
        vector<int>v;
        while(n!=0){
            r=n%10;
            n=n/10;
            v.push_back(r);
            c++;
        }
        int sum=0;
       for(i=c,j=0;i>=0,j<c;i--,j++){
           sum=sum+v[j]* pow(10,i);
       }
       if(sum==x){
           return true;
       }
    
    }