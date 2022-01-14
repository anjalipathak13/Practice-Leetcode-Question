class Solution {
public:

     bool valid(int l,int r,string s){
        while(l<r){
            if(s[l]!=s[r])
                return false;
            l++,r--;
        }
        return true;
    }  
    
    bool validPalindrome(string s) {
    int h=s.length()-1;
        int l=0;
      while(l<=h)
      {
          if(s[l]!=s[h] )
         return(valid(l+1,h,s)||valid(l,h-1,s));
              
                l++,h--;
      }
        return true;
    }
};