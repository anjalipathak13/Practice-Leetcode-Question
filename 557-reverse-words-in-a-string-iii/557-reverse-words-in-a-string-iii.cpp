class Solution {
public:
    string reverseWords(string s) {
        
      for (int left=0, right=0, arrIdx=0; arrIdx < s.length(); arrIdx++){
          if (s[arrIdx + 1] == ' ' || arrIdx + 1 == s.length()){
              left = arrIdx;
              while (left > right){
                  swap(s[right++], s[left--]);    
              }
              right = arrIdx + 2;
          }
      }  
    return s;
        
    }
};