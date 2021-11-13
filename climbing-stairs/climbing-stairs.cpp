class Solution {
public:
    
    int climbStairs(int n) {
if(n>=1 and n<=3)
return n;
int n1=2,n2=3,n3;
for(int i=3;i<n;i++){
n3=n1+n2;
n1=n2;
n2=n3;
}
return n3;    
    }
};