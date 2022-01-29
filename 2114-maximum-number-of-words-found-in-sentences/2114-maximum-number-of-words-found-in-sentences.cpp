class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(auto &it: sentences)
        {   int c=0;
            for(auto ch:it)
            {
                if(ch==' ')
                    c++;
            }
         maxi=max(maxi,c+1);
        }
        return maxi;
    }
};