class Solution {
public:
    int countPrimes(int n) {
        vector<int>p(n,0);
       // if(n==1)
         //   return 0;
        for(int i=2;i*i<n;i++)
        {
            if(p[i]==1)
                continue;
            for(int j=i*i;j<n;j+=i)
            {
                p[j]=1;
            }
        }
        int c=0;
        for(int k=2;k<n;k++)
        {
            if(p[k]==0)
                c++;
        }
        return c;
    }
};