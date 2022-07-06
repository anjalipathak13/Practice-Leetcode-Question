class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
   /*  vector<int>m;
        vector<int>ans;
        for(int i=0;i<p.length();i++)
            m[p[i]]++;
        int i=0;int j=p.length();
       for(int i=0;i<=s.length()-p.length();i++)
        {
            m[s[j+i]]++;
            if(j+i==p.length()-1)
            {
                for(int k=0;k<p.length();i++)
                {
                    if(m[p[k]]%2!=0)
                       m[p[k]] =m[p[k]]/2;
                        break;
                }
                
                ans.push_back(i);
                i=j+1;
                j=p.length();
                
            }
            
        }
        return ans;
    }
};*/
        
       /* vector<int> ans;
        int m = p.length(), n = s.length();
        if (n < m)
            return ans;
        unordered_map<char, int> mp, ms;
        for (int i = 0; i < m; i++)
        {
            ms[s[i]]++;
            mp[p[i]]++;
        }
        for (int i = m; i < n; i++)
        {
            if (ms == mp)
                ans.push_back(i - m);
            // add next character
            ms[s[i]]++;
            // remove previous character
            ms[s[i - m]]--;
            if (ms[s[i - m]] == 0)
                ms.erase(s[i - m]);
        }
        if (ms == mp)
            ans.push_back(n - m);
        return ans;*/
          int sl=s.length();
        int pl=p.length();
        unordered_map<char,int>ms,mp;
        for(int i=0;i<pl;i++)
        {
            ms[s[i]]++;
            mp[p[i]]++;
                
        }
        int l=0;
        vector<int>ans;
        for(int i=pl;i<sl;i++)
        {
            if(ms==mp)
            {
                ans.push_back(l);
              }
            ms[s[l]]--;
          
              if (ms[s[l]] == 0)
                ms.erase(s[l]);   
          ms[s[i]]++;
            l++;
        }
        
        if(ms==mp)
            ans.push_back(l);
        return ans;
    }
};