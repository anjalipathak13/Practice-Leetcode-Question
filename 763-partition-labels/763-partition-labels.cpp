class Solution {
public:
    vector<int> partitionLabels(string s) {
       vector<int>end(26,0);
        vector<int>res;
        for(int i=0;i<s.size();i++)
            end[s[i]-'a']=i;
        int maxi=0,j=0;
        for(int i=0;i<s.size();i++)
        {
            maxi=max(maxi,end[s[i]-'a']);
            if(maxi==i){
                res.push_back(i-j+1);
                j=i+1;
            }
        }
        
        return res;
    }
};