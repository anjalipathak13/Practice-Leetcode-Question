class Solution {
public:
    int countOrders(int n) {
       long dp=1;
	for(int i=2; i<=n; i++)
		dp = dp*(i*(2*i-1))%1000000007;
	return dp; 
    }
};