class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
       vector<int>ans;
        int maxi=0;
         int zero=0;
           int one=0;
       /* vector<pair<int,int>>ans;
       for(int i=0;i<nums.size();i++)
       {  int zero=0;
           int one=0;
          for(int j=0;j<i;j++)
          {
              if(nums[j]==0)
                  zero++;
          }
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]==1)
                    one++;
                
        } 
         int a=one+zero;
         ans.push_back({i,one+a});  
          maxi=max(maxi,a);  
        cout<<maxi;
                    
       }
                   for(auto it:ans)
                    {
                        if(it.second==maxi)
                            an.push_back(it.first);
                    }
                    return an;*/
       for(int i=0;i<nums.size();i++)
        {
            one+=nums[i];
        }zero=0;
        for(int i=0;i<=nums.size();i++)
        {
            if(one+zero>maxi)
            {
                maxi=one+zero;
                ans.clear();
                ans.push_back(i);
            }
            else if(one+zero==maxi)
            {
                ans.push_back(i);
            }
            if(i!=nums.size())
            {
                if(nums[i]==0)
                    zero++;
                if(nums[i]==1)
                    one--;
            }
            
        }
        return ans;
      
    }
};