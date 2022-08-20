class Solution {
public:
    string removeKdigits(string num, int k) {
     stack<char>st;
        int n=num.size();
        for(auto c:num)
        {
            while(!st.empty()&&st.top()>c&&k!=0){
                st.pop();
                k--;
            }if(!st.empty()||c!='0')
            st.push(c);
            
        }
        
        //if k!=0;
        while(!st.empty()&&k--)
            st.pop();
        if(st.empty())return "0";
        while(!st.empty())
        {
            num[n-1]=st.top();
            st.pop();
            n--;
        }
        return num.substr(n);
    }
};