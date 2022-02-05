class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       vector<int>l1;
        vector<int>l2;
        int c=0;
        for(auto it:nums)
        {
            if(it<pivot)
             l1.push_back(it);
            else if(it>pivot)
                l2.push_back(it);
            else{
            if(it==pivot)
                c++;
            }
        }int k=0;
        for(auto i:l1)
        {
            nums[k++]=i;
        }
        while(c--){
        nums[k++]=pivot;
        }
        for(auto i:l2)
        {
            nums[k++]=i;
        }
        return nums;
    }
};