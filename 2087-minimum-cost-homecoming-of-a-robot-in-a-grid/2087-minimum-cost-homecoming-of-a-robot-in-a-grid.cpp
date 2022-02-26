class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        int startrow=min(startPos[0],homePos[0]);
        int endrow=max(startPos[0],homePos[0]);
        int startcol=min(startPos[1],homePos[1]);
        int endcol=max(startPos[1],homePos[1]);
        int mini=0;
      for(int i=startrow;i<=endrow;i++)
      {
          mini+=rowCosts[i];
      }
      for(int i=startcol;i<=endcol;i++)
      {
          mini+=colCosts[i];
      }
        mini=mini-rowCosts[startPos[0]];
        mini=mini-colCosts[startPos[1]];
        return mini;
    }
};