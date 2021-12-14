class Solution {
public:
    bool fun(vector<int>& nums,int l,int s,vector<vector<int>>&t)
    {
        
           if(s==0)
            return true;
         if(l==0 && s!=0)
            return false;                                                        
            
        if(t[l][s]!=-1)
            return t[l][s];
            if(nums[l-1]<=s)
                return t[l][s]=fun(nums,l-1,s-nums[l-1],t)||fun(nums,l-1,s,t);
                      else
            return t[l][s]=fun(nums,l-1,s,t);
        
        }
    
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        else
        {  
            int l=nums.size();
            int s=sum/2;
          //  int t[l+1][s+1]; 
           //  memset(t,-1,sizeof(t));
            vector<vector<int> > t( l+1 , vector<int> (s+1, -1));
            if(fun(nums,l,s,t)==true)
                return true;
            else 
                return false;
           
        }
        
    }
};