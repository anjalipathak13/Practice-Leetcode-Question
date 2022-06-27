class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
      for(char i:n)
      {
          int maxi=i-'0';
          ans=max(ans,maxi);
      }
        return ans;
    }
};