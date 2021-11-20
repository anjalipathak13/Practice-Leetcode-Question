class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=0,h=0;
        for(int i=0;i<weights.size();i++)
        {
            h+=weights[i];
            l=max(l,weights[i]);
        }
       int ans=INT_MAX;
        while(l<=h)
        {
            int mid=(l+h)/2;
            int counted=0;
             int allowedwt=0;
            for(int i=0;i<weights.size();i++)
            {
            if(allowedwt+weights[i]>mid)
            {
                counted++;
                allowedwt=weights[i];
            }else{
                allowedwt+=weights[i];
            }}counted++;
             
            if(counted<=days)
            {  ans=min(ans,mid);   
                h=mid-1;
            }else{
                l=mid+1;
            }
            
        }
            
         return ans;   
            
        
    }
};