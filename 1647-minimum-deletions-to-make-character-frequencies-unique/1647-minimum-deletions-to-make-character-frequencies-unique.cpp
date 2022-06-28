class Solution {
public:
    
     int minDeletions(string str){
        vector<int> h(26, 0);
        for(auto x : str)h[x-'a']++;                 
        set<int> s ;                                     
        int ans = 0 ;                                    
        for(int i=0; i < 26; i++) {                     
            while(h[i] and (s.find(h[i])!=s.end())) {    
                h[i]--; ans++;}                           
            s.insert(h[i]);
            }
        return ans;  }
            };
