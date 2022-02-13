class Solution {
public:
    int minFlips(int a, int b, int c) {
    int res=0;
        while(a!=0 || b!=0 || c!=0)
        {
            int ai=a%2,bi=b%2,ci=c%2;
            if(ci==0 ){
                res+=ai+bi;
            }else if(ci==1 && ai+bi==0)
            {
                res++;
            }
                    a=a/2;
                    b=b/2;
                    c=c/2;
        }
        return res;
        
    }
};