class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=time.size();
        int c=0;
        unordered_map<int,int>v;
      for(int i=0;i<n;i++)
      {
          int a=time[i]%60;
          if(a==0)
          {
              c+=v[0];
          }else
          {
              c+=v[60-a];
          }
          v[a]++;
          
      }
        return c;
    }
};