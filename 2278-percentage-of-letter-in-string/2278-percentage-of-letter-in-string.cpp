class Solution {
public:
    int percentageLetter(string s, char letter) {
      if(s.length()==0)
          return 0;
        int n=s.length();
        int c=0;
        for(auto i:s)
            if(i==letter)c++;
    
        int per=((c*100)/n);
       // cout<<per;
        int ans=(per);
        return ans;
        
            
    }
};