class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1||k==1)
            return 0;
        //0       ->2^0
        //01      ->2^1
        //0110   ->2^2
        //0110   1001  ->2^3
        
        int mid=pow(2,n-1)/2;
        if(k<=mid)
           return kthGrammar(n-1,k);
        else
            return !kthGrammar(n-1,k-mid);
            
    }
};