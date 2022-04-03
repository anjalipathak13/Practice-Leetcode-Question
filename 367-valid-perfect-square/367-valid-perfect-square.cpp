class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=0;
        int h=num;
        while(l<=h)
        {
        long long mid=l+(h-l)/2;
            if(mid*mid==num)
                return mid;
            if(mid*mid<num)
                l=mid+1;
            else
                h=mid-1;
        }
        return false;
    }
};