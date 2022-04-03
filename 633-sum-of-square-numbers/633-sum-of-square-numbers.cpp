class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0)
            return false;
     long long l=0,r=sqrt(c);
        while(l<=r)
        {
            long long mid=l*l+r*r;
           
            if(mid<c)
                l++;
            else if(mid>c)
                r--;
            else
                return true;
        }
        return false;
    }
};