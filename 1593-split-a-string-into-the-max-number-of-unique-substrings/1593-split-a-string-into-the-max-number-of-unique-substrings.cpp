class Solution {
public:
    int check(int i,string s,unordered_set<string>&st,string temp)
    {
        if(s.size()==i)
            return 0;
        else{
        temp+=s[i];
        int op1=INT_MIN/2;
        int op2=INT_MIN/2;
        if(st.find(temp)==st.end()){
            st.insert(temp);
         op1=1+check(i+1,s,st,"");
            st.erase(temp);
            
        }
         op2=check(i+1,s,st,temp);
        return max(op1,op2);
    }}
    int maxUniqueSplit(string s) {
      unordered_set<string>st;
        return check(0,s,st,"");
    }
};