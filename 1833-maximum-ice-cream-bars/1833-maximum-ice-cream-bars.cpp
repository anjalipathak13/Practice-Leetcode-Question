class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int c=0;
        for(int i=0;i<costs.size();i++)
        {
            if(costs[i]<=coins)
            {
                c++;
                coins-=costs[i];
               // cout<<coins<<" ";
            }
            
            
            
        }
// 1 1 2 3 4
        return c;
    }
};