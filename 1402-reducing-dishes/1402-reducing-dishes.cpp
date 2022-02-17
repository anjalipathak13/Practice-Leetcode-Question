class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
      int n=satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        int sum=0;
        int in=n-1;
        for(int i=n-1;i>=0;i--)
        {
            sum+=satisfaction[i];
            if(sum<0)
                break;
            in--;
        }
        int ans=0;
        int j=1;
        for(int i=in+1;i<n;i++)
            ans+=j++*satisfaction[i];
        return ans;
    }
};