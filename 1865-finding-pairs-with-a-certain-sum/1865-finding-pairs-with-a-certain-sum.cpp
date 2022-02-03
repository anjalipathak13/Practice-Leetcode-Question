class FindSumPairs {
public:
    unordered_map<int,int>m;
    vector<int>nums11;
    vector<int>nums12;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        nums11=nums1;
        nums12=nums2;
       for(int i=0;i<nums2.size();i++){
         m[nums2[i]]++;
       }
        
    }
    
    void add(int index, int val) {
     m[nums12[index]]--;
        nums12[index]+=val;
        m[nums12[index]]++;
    }
    
    int count(int tot) {
        int c=0;

            for(int j=0;j<nums11.size();j++)
            {
                if(m.find(tot-nums11[j])!=m.end())
                    c+=m[tot-nums11[j]];
            }
        
        return c;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */