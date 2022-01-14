class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        
        if(strs.size() == 0) 
        return "";
    
          string ans  = "";   
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        for(int i=0;i<first.size();i++)
        {
            if(first[i]==last[i])
            {
            ans+=first[i];
            }else{
                break;
            }
        }
        return ans;
    }
};