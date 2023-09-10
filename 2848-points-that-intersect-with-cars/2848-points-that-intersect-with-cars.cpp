class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int mini =INT_MAX;
        int maxi =INT_MIN;
         
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
            mini = min(mini,nums[i][j]);
            maxi = max(maxi,nums[i][j]);
            }
        }
       vector<int>vis(101,0);
       for(int i=0;i<nums.size();i++){            
               int l=nums[i][0];
               int h=nums[i][1];
               for(int k=l;k<=h;k++){
                   vis[k]=1;
               }
        }
        
        int c=0;
       for(int i=1;i<=maxi;i++){
          if(vis[i])
               c++;
        }
        return c;
    }
};