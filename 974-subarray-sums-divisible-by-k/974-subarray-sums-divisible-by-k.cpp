class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int n=nums.size();
        unordered_map<int,int>m;
        int subarray=0;
        int curr_sum=0;
        m[0]=1;
        for(int i=0;i<n;i++)
        {   
            curr_sum+=nums[i];
            int rem=curr_sum%k;
            if(rem<0)
                rem+=k;
               if(m.find(rem) != m.end()){
                   subarray+=m[rem];
               }
            m[rem]++;
        }
        return subarray;
    }
};