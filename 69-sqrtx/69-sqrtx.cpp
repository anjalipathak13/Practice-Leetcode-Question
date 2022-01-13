class Solution {
public:
    int mySqrt(int x) {
      int l=1;
      int h=x;
        int ans;
        int mini=INT_MAX;
        if(x==0 || x==1)
            return x;
        while(l<=h)
        {
            long long int mid=l + ((h-l)/2);
           long long int com=mid*mid;
            if(com==x)
            { 
               mini=mid;
                break;
                
            }else if(com<x)
            {  
                mini=mid;
                l=mid+1;
            }else
            {
                h=mid-1;
            }
                
        }
        return mini;
    }
};