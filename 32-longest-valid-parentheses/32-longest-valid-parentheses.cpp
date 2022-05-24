class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        int res=0;
       st.push(-1);
           int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
                
            }else
            {
                if(!st.empty())
                    st.pop();
                if(!st.empty())
                {
                    res=max(i-st.top(),res);
                    
                }else{
                    st.push(i);
                }
            }
        }
          return res;      
        
    }
};