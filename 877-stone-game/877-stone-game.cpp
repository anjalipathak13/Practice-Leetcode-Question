class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int even=0,odd=0;
       for(int i=0;i<piles.size();i++)
       {
          if(i%2==0)
              even+=piles[i];
           else
               odd+=piles[i];
       }
        return true;
    }
};