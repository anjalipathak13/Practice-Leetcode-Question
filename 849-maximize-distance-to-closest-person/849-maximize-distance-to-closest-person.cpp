class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
       int ans=0;
        int count=0;
       int n= seats.size();
       for(int i=0;i<n;i++)
       {
           if(seats[i]==1)
           {
               count=0;
           }else{
               count++;
               ans=max(ans,(count+1)/2);
           }
       }
        
        for(int i=0;i<n;i++)
        {
            if(seats[i]==1)
            {
                ans=max(ans,i);
                break;
            }
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(seats[i]==1)
            {
                ans=max(ans,n-i-1);
                break;
            }
        }
        return ans;
    }
};