class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      unordered_map<int,int>m;
      int prefixsum=0;
      int n=nums.size();
        int i=0;
        int c=0;
        while(i<n)
        {
            prefixsum+=nums[i];
            if(prefixsum==k){
                c+=1;
               // m[prefixsum]++;
            } 
                if(m.find(prefixsum-k)!=m.end()){
                c+=m[prefixsum-k];    
                }
        m[prefixsum]++;
        i++;
        }
return c;
    }
};