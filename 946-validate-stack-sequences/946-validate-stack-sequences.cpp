class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int k=0,i=0;
        while(i<pushed.size())
        {
            
            if((!st.empty())&&(st.top()==popped[k]))
            {   
               // st.push(pushed[i]);
                st.pop();
                k++;
            }else 
            {
                st.push(pushed[i]);
                i++;
            }
        }
        if(st.empty())
            return true;
        for(int j=k;j<popped.size();j++)
        {
                if((!st.empty())&&(st.top()==popped[j]))
                {
                    st.pop();
                
                }
            
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};