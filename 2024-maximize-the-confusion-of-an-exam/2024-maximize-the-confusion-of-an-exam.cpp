class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
       int j=0,i=0;
        int maxi=0;
        int max_len=0;
        unordered_map<char,int>m;
        while(i<answerKey.length())
        {
               m[answerKey[i]]++;
            maxi=max(maxi,m[answerKey[i]]);
            
            int curr_len=i-j+1;
            
            while((i-j+1)-maxi>k)
            {  m[answerKey[j]]--;
                j++;
                }
              max_len=max(max_len,i-j+1);
            i++;
        }
        return max_len;
       /* unordered_map<char,int>m;
       // int curr_len=0;
        int maxcount=0,ans=-1;
        int i=0;
        int j=0;
        int n=s.length();
        while(j<n)
        {
            m[s[j]]++;
            maxcount=max(maxcount,m[s[j]]);
               int curr_len=j-i+1;
            if(curr_len-maxcount>k)
            {
                m[s[i]]--;
                i++;
            }
            curr_len=j-i+1;
            ans=max(ans,curr_len);
            j++;
        }
        return ans;*/
    }
};