class Solution {
public:
   /* bool can_eat(int mid,vector<int>& piles, int h)
    {
        int hours_till=0;
        for(int i=0;i<piles.size();i++)
        {
            if(piles[i]<=mid)
            {
                hours_till++;
            }else{
                int a=piles[i];
                while(!(a<=0))
                     {
                     a=a-mid;
                    hours_till++;
                      }
                     }
                }
        
       if(hours_till>h)
        return false;
        else
        return true;
    }*/
    bool can_eat(vector<int>& piles, int k, int h){
       int hours = 0;
        for(int i = 0; i < piles.size(); i++){
            hours += (piles[i] + k -1)/k;
        }
        if(hours > h){
            return false;
        }
        else{
            return true;
        }
        
    }
   int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=INT_MIN;
     for(int i=0;i<piles.size();i++)
     {
        if(piles[i]<low)
            low=piles[i];
         if(piles[i]>high)
             high=piles[i];
         }
        int ans;
          while(low<=high)
          {
              
             int mid=low+(high-low)/2;
              if(can_eat(piles,mid,h))
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
