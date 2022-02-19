class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>dis;
        for(int i=0;i<prices.size();i++)
        { int ele=0,f=0;
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j]<=prices[i]){
                    ele=prices[i]-prices[j];
                    dis.push_back(ele);
                    f=1;
                    break;}
                    
            }
                if(ele==0&&f==0)
                    dis.push_back(prices[i]);
        }
        return dis;
    }
};