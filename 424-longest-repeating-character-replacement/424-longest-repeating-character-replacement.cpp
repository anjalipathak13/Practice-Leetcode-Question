class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>m;
       // int curr_len=0;
        int maxcount=0,ans=-1;
        int i=0;
        int j=0;
        int n=s.length();
        while(j<n)
        {
            m[s[j]]++;
            maxcount=max(maxcount,m[s[j]]);
               int curr_len=j-i+1;
            if(curr_len-maxcount>k)
            {
                m[s[i]]--;
                i++;
            }
            curr_len=j-i+1;
            ans=max(ans,curr_len);
            j++;
        }
        return ans;
    }
};