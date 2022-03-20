class Solution {
public:
    long long maximumSubsequenceCount(string text, string p) {
     int n=text.length();
        if(p[0]==p[1])
        {
            long long ans=0;
            for(int i=0; i<n; i++)
                if(text[i]==p[0])
                    ans++;
            
            return ans*(ans+1)/2;
                
        }
        
        int f=0,s=0;
        long long ans=0;
        for(int i=0; i<n; i++)
        {
            if(text[i]==p[0])
                f++;
            if(text[i]==p[1])
            {
                s++;
                ans+=f;
            }       
        }
        
        return max(ans+f, ans+s);
    }
};