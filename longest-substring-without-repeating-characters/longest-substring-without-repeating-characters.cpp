class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int>v(256,-1);
        int left=0;
        int right=0;
        int l=0;
        int n=s.size();
        while(right<n)
        {
            if(v[s[right]]!=-1)
                left=max(left,v[s[right]]+1);
            v[s[right]]=right;
            l=max(l,right-left+1);
            right++;
        }
        return l;
        
    }
};