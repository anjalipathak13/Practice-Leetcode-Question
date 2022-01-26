class Solution {
public:
    bool possible(int mid,vector<int>&nums,int m, int k)
    {
        int count=0,j=0;
        int fl=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=mid)
                fl++;
            else
                fl=0;
            if(fl==k){
                count++;
                fl=0;
            }
        }
        if(count>=m)
            return true;
        else
            return false;
        
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(m * k > bloomDay.size())
            return -1;
        int low=1;
        int maxi=INT_MIN;
        int high=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]>maxi)
                maxi=bloomDay[i];
        }
        high=maxi;
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(possible(mid,bloomDay,m,k))
            { 
                ans=mid;
                high=mid-1;
                
                
            }else{
                
                low=mid+1;
            }
            
            }
        return ans;
    }
};