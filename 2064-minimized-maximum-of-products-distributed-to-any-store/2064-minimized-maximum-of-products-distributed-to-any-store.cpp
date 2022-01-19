class Solution {
public:
    bool possible( vector<int>& quantities,int k,int n)
    {
       int till=0;
        for(int i=0;i<quantities.size();i++)
        {
            till+=quantities[i]/k;
            if(quantities[i]%k!=0)
                till++;
        }
        if(till<=n)
            return true;
        return false;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
         int low=1;
        int high=INT_MIN;
     for(int i=0;i<quantities.size();i++)
     {
        if(quantities[i]<low)
            low=quantities[i];
         if(quantities[i]>high)
             high=quantities[i];
         }
        int ans;
          while(low<=high)
          {
              
             int mid=low+(high-low)/2;
              if(possible(quantities,mid,n))
              {
                  ans=mid;
                  high=mid-1;
              }
              else{
                  low=mid+1;
                  
              }
              
          }
        return ans;
        
    }
};