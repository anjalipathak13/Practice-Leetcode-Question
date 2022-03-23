class Solution {
public:
    int bs_f(vector<int>& a, int target)
    {
        int l=0;
        int h=a.size()-1;
        int ans=-1;
        if(a.size()==0)
            return ans;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(a[mid]==target){
                h=mid-1;
                ans=mid;
            }
            else if(a[mid]>target)
                h=mid-1;
            else
                l=mid+1;
                
            
        }
        
       return ans; 
    }
    int bs_l(vector<int>& a, int target)
    {
        int l=0;
        int h=a.size()-1;
        int ans=-1;
        if(a.size()==0)
            return ans;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(a[mid]==target){
                l=mid+1;
                ans=mid;
            }
            else if(a[mid]>target)
                h=mid-1;
            else
                l=mid+1;
                
            
        }
        
       return ans; 
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>ans;
       // if(nums.size()==0)
       // {
       //     ans.push_back(0);
       //     return ans;
       // } 
       int first=bs_f(nums,target);
        int last=bs_l(nums,target);
       // vector<int>ans;
        
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};