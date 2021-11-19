class Solution {
public:
    int maxArea(vector<int>& height) {
        int r=height.size()-1;
        int l=0;
        int ans=0;
        while(l<r)
        {   if(height[l]<height[r]){
            ans=max(ans,(r-l)*height[l]);
                l++;
            }
            else{
                ans=max(ans,(r-l)*height[r]);
                    r--;
                
            }
        }
         return ans;  
        
    }
};