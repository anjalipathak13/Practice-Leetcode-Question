class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>m;
        for(int i=0;i<text.length();i++){
            m[text[i]]++;
        }
        int ans=0;
        while(m['b']>=1 && m['a']>=1 && m['l']>=2 && m['o']>=2 && m['n']>=1){
            ans++;
            
            m['b']--;
            m['a']--;
            m['l']--;
            m['l']--;
            m['o']--;
            m['o']--;
            m['n']--;
        }
        
        return ans;

    }
};