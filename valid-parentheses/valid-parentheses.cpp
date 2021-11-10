class Solution {
public:
    bool isValid(string s) {
       stack<char> S;
        char x;
        
        for (int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                S.push(s[i]);
                continue;
            }
                
            if(S.empty())
                return false;
            
            switch(s[i]) {
                case ')' : x = S.top();
                           S.pop();
                           if(x == '{' || x == '[')
                               return false;
                           break;
                case '}' : x = S.top();
                           S.pop();
                           if(x == '(' || x == '[')
                               return false;
                           break;
                case ']' : x = S.top();
                           S.pop();
                           if(x == '(' || x == '{')
                               return false;
                           break;           
            }
        }
        return S.empty(); 
    }
};