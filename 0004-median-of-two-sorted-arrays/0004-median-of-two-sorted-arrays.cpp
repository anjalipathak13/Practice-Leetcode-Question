class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       double med;
        
        for(int i=0;i<nums2.size();i++)
        nums1.push_back(nums2[i]);
        
        sort(nums1.begin(),nums1.end());
        
        int s=nums1.size();
        if(s%2!=0){
            return nums1[s/2];
        }
        else
          return   (nums1[s/2]+nums1[s/2-1])/2.0;
    
    }
};