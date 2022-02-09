class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
      if(k<0)
          return 0;
        unordered_map<int,int>m;
        for(auto it:nums)
            m[it]++;
        int c=0;
       for(auto i:m)
       {   if(k==0){
           if(m.find(i.first+k)!=m.end()&& i.second>=2)
               c++;
       }
           else
           {
               if(m.find(i.first+k)!=m.end())
               c++;
       }}
        return c;
    }
};