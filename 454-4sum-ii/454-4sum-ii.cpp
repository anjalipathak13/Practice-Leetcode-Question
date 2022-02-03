class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
    unordered_map<int,int>m;
        //int c=0;
        for(auto a:nums1)
        {
            for(auto b:nums2)
            {
               // int inx=a+b;
                m[a+b]++;
            }
        }
        
        int count=0;
        for(auto c:nums3)
        {
            for(auto d:nums4)
            {
                int inx=-c-d;
               if(m.find(inx)!=m.end())
                   count+=m[inx];
            }
        }
        return count;
        
    }
};
    