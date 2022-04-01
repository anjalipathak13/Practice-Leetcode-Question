class Solution {
public:
    void reverseString(vector<char>& s) {
        string a;
    
    for(int i=0;i<s.size();i++)
        a+=s[i];
    
    for(int i=0;i<s.size();i++)
        s[i]=a[s.size()-i-1];
    

        
    }
};