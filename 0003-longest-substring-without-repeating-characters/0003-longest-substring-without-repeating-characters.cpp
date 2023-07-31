class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 1)  return 1;
        
        int i = 0;
        int j = 0;
        int maxi = 0;
        set<char>st;
        
        while(i<n && j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;
                 maxi = max(maxi,j-i);
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
   
        return maxi;
    }
};