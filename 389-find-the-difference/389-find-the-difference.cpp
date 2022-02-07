class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0;
        int sum2=0;
      for(int i=0;s[i]!='\0';i++)
      {
          sum1=sum1+s[i];
         
      } 
        //cout<<sum1;
         for(int i=0;t[i]!='\0';i++)
      {
          sum2+=t[i];
      }
        return char(sum2-sum1);
    }
};