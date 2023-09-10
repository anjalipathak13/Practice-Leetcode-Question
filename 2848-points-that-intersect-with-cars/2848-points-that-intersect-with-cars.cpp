class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int maxi =INT_MIN;
       vector<int>vis(101,0);
       for(int i=0;i<nums.size();i++){  
           int l=nums[i][0];
           int h=nums[i][1];
           maxi = max(maxi,l);
           maxi = max(maxi,h);
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