class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>m;
      for(int i=0;i<jewels.length();i++)
          m[jewels[i]]=1;
        int c=0;
        for(int i=0;i<stones.size();i++)
        {
            if(m.find(stones[i])!=m.end())
                c++;
        }
        return c;
    }
};