class Solution {
public:
    string removeDuplicates(string s, int k) {
     /* stack<pair<char,int>>st;
        for(auto i:s)
        {
            
    
                if(!st.empty() && (st.top().first==i))
                {
                // st.top().second++;
                if(++st.top().second==k)
                        st.pop();
                }else
                {
                    st.push({i,1});
                }
            
        }
    string ans;
        while(!st.empty())
        {
            ans=st.top().first+ans;
            st.pop();
        }
        //ans.reverse();
        
        return ans;
    }*/
        vector<pair<int, char>> stack = {{0, '#'}};
        for (char c: s) {
            if (stack.back().second != c) {
                stack.push_back({1, c});
            } else if (++stack.back().first == k)
                stack.pop_back();
        }
        string res;
        for (auto & p : stack) {
            res.append(p.first, p.second);
        }
        return res;
    }
};