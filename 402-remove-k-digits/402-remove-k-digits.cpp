class Solution {
public:
    string removeKdigits(string num, int k) {
        /*int n=num.length();
        string s=num.substr(3);
        
        int mini=0;
        mini = stoi(s);
        int j=3;
       for(int i=0;i<num.length()-3+1;i++)
       {
           string s=num.substr(0,i)+num.substr(j);
        cout<<s<<" ";
           j++;
           mini=min(mini,stoi(s));
           
       }
        //12219 14219 14319 14329 14322 
        return to_string(mini);*/
        if(k>=num.size())
            return "0";
        stack<char>s;
        for(int i=0;i<num.length();i++)
        {
            if(s.empty())
                s.push(num[i]);
            else{
            while(!s.empty() && s.top()>num[i]&& k>0)
            {
                s.pop();
                k--;
            }
                s.push(num[i]);
            }
        }
        while(k>0)
        {
            s.pop();
            k--;
        }
        if(s.empty())
            return 0;
        string ans;
        while(!s.empty()){
         ans=s.top()+ans;
            s.pop();
        }
          int i=0;     
        while(ans[i]=='0')
        {
           i++; 
        }
            
        if(ans.substr(i)=="") 
            return "0";
        return ans.substr(i);
            
        
    }
};