class Solution {
public:
    int titleToNumber(string columnTitle) {
       int p=columnTitle.size()-1;
        int ans=0;
        for(auto i:columnTitle)
        {
            ans+=pow(26,p--)*(i-'A'+1);
        }
        return ans;
    }
};