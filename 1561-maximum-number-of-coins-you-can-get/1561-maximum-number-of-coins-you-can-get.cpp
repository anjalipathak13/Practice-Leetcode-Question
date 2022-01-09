class Solution {
public:
    int maxCoins(vector<int>& piles) {
       sort(piles.begin(),piles.end());
        if(piles.size()==3)
            return piles[1];
        int you=0;
        int j=0;
        int i=piles.size()-1;
        while(j<i && piles[i]!=-1)
        {  
        
           you+=piles[i-1];
            piles[j]=-1;
            j++;
            i-=2;
        }
        return you;
    }
};