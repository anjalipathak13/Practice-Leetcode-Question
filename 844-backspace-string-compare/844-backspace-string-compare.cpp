class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,t1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a'&& s[i]<='z'){
              s1+=s[i];
            }
            else{
                if(!s1.empty())
                s1.pop_back();
            }  
                    
            
        }
        //cout<<s<<" "<<endl;
        for(int i=0;i<t.length();i++)
        {
            if(t[i]>='a'&& t[i]<='z'){
              t1+=t[i];}
            else{
                if(!t1.empty())
                t1.pop_back();
            }
        }
         //cout<<t<<" "<<endl;
        if(s1==t1)
            return true;
        return false;
    }
};