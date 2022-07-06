class Solution {
public:
    bool isAnagram(string s, string t) {
      vector<int>freq(26,0);
        for(auto i:s)
            freq[i-'a']++;
        for(auto j:t)
            freq[j-'a']--;
        for(int i=0;i<26;i++){
            if(freq[i]!=0)
                return false;
            
        }
        return true;
    }
};