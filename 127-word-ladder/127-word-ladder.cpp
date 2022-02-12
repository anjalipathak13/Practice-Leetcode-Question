class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if(find(wordList.begin(),wordList.end(),endWord)==wordList.end())
            return 0;
       set<string>s;
        for(auto i:wordList)
            s.insert(i);
        queue<string>q;
        q.push(beginWord);
        int ans=0;
        while(!q.empty())
        {
            
            int n=q.size();
            ans++;
            while(n--)
            {
                string curr=q.front();
                  q.pop();
                
                for(int i=0;i<curr.length();i++){
                    string temp=curr;
                for(char c='a';c<='z';c++)
                {
                    temp[i]=c;
                    if(temp==curr)
                        continue;
                    if(s.find(temp)!=s.end())
                    {
                        q.push(temp);
                        s.erase(temp);
                    }
                    if(temp==endWord)
                    {
                        ans=ans+1;
                        return ans;
                    }
                }
                    
            }}}
            
            return 0;
        
    }
};