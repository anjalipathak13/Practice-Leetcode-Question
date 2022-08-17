class Solution {
public:
     set<string>s;
    
    void count(string word,vector<string>a)
    {   string ans;
        for(int i=0;i<word.size();i++)
        {
           ans+=a[word[i]-'a']; 
        }
     s.insert(ans);
     cout<<ans<<" ";
    }
    int uniqueMorseRepresentations(vector<string>& words) {
       
        vector<string>a={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    for(auto i:words)
    {
        count(i,a);
    }
        return s.size();
    }
};