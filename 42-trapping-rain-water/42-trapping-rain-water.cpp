class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       int l=0;
        int r=n-1;
        int maxleft=0;
        int maxright=0;
        int ans=0;
        while(l<=r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]>=maxleft)
                    maxleft=height[l];
                ans+=maxleft-height[l];
                l++;
            }
            else{
                if(height[r]>=maxright)
                    maxright=height[r];
                ans+=maxright-height[r];
                r--;
            }
        }
        return ans;
    }
};