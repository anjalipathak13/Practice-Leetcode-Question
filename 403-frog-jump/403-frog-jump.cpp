class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_map<int,set<int>>m;
          m[stones[0]+1]={1};
          for(int i=1;i<stones.size();i++)
        {
            int position=stones[i];
            for(auto steps:m[position])
            {
                m[steps+stones[i]].insert(steps);
                m[(steps+1)+stones[i]].insert(steps+1);
                m[(steps-1)+stones[i]].insert(steps-1);
                
            }
        }
        return m[stones[stones.size()-1]].size()!=0;
    }
};