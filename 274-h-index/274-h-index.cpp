class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int ans=0;
        int a=0;
       for(int i=1;i<=n;i++)
        {
           int c=i;
         for(int j=0;j<n;j++)
         {
             if(citations[j]>=c)
                 a++;
         }
         if(a>=c){
             ans=max(ans,c);
         }
         a=0;
     }
        return ans;
    }
};