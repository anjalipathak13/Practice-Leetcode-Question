class Solution {
public:
    vector<string> v;
    int find(string s,int l){
        int idx=-1;
        for(int i=l;i<s.size();i++){
            if(isalpha(s[i])){
                idx=i;
                break;
            }
        } 
        return idx;
    }
    void fun(string s,int idx){
       if(idx==s.size()){
            v.push_back(s);
            return;
        }
        int id=find(s,idx+1);
        if(id!=-1){
            fun(s,id);
        }
        s[idx]-=32;
        v.push_back(s);
        if(id!=-1){
            fun(s,id);
        }
        return;
    }
    vector<string> letterCasePermutation(string s) {
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                s[i]+=32;
            }
        }
        int idx=find(s,0);
        v.push_back(s);
        if(idx==-1){
            return v;
        }
        cout<<s;
        fun(s,idx);
        return v;
        
    }
};