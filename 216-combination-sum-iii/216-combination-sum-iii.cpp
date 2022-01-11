class Solution {
public:
    void combi(int ind,vector<vector<int>>&ans,vector<int>&ds,int k,int n)
    {
        if(k==0 && n==0)
        {    
             ans.push_back(ds);
         return;
        }
        
        
          for(int i=ind;i<=9 && n>=i;i++){
            ds.push_back(i);
            combi(i+1,ans,ds,k-1,n-i);
            ds.pop_back();
        }
         
            
 }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        combi(1,ans,ds,k,n);
        return ans;
    }
};