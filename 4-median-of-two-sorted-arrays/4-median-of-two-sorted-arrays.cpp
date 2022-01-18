class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       double res;
        int n=nums1.size()+nums2.size();
        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1); 
        int mid=(n+1)/2; // 1
        int lo=0,hi=nums1.size(); // 2
        int left1=INT_MIN,left2=INT_MIN,right1=INT_MAX,right2=INT_MAX;
        while(true){
            int split1 = lo+(hi-lo)/2;
            int split2 = mid-split1;
            left1=INT_MIN,left2=INT_MIN,right1=INT_MAX,right2=INT_MAX;
            if(split1>0) left1=nums1[split1-1];
            if(split2>0) left2=nums2[split2-1];
            if(split1<nums1.size()) right1=nums1[split1];
            if(split2<nums2.size()) right2=nums2[split2];
            if(left1<=right2 && left2<=right1) break;
            if(left1>right2) hi=split1-1;
            else if(left2>right1) lo=split1+1;  
        }
        if(n%2==0){
            double l = (double)max(left1,left2);
            double r = (double)min(right1,right2);
            res = (double)((l+r)/2);
            return res;
        }
        res = (double)max(left1,left2);
        return res; 
    }
};