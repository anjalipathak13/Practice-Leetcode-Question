class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
     /* unordered_map<int,int>m;
        if(trust.size()==0)
            return -1;
        
        for(int i=1;i<=n;i++)
        {
            m[i]=0;
        }
      for(int i=0;i<trust.size();i++)
      {
          m[trust[i][0]]=trust[i][1];
      }
      int c=0;
        if(m[1]!=0)
         c=m[1];
        else
            return 1;
       // cout<<c;
      for(int i=1;i<=n;i++)
      {   
          //cout<<m[i];
          if(c!=m[i] && m[i]!=0)
              return -1;
           if(m[i]==0)
             return i;
      }
          
        return -1;*/
        vector<int>v(n+1);
        for(int i=0;i<trust.size();i++)
        {
            v[trust[i][0]]=-1;
            v[trust[i][1]]++;
        }
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==n-1)
                return i;
                
        }
        return -1;
    }
};