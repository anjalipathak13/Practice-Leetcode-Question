class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
      if(n%k!=0)
          return false;
    map<int,int>m;
    for(auto i:nums)
        m[i]++;
        while(m.size())
        {
            int ele=m.begin()->first;
            for(int i=0;i<k;i++)
            {
                if(m.find(ele+i)==m.end())
                    return false;
                m[ele+i]--;
                if(m[ele+i]==0)
                    m.erase(ele+i);
            }
        }
 return true;
    }
};