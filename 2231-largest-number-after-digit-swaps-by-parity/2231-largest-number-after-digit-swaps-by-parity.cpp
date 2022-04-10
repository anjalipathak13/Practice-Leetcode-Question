class Solution {
public:
    int largestInteger(int num) {
    
        string s=to_string(num);
        int n=s.length();
       
        if(n==1)
            return s[0]-'0';
    
        vector<int>v1,v2;
        int j=0;
       // unordered_map<int,int>m1,m2;
       for(int i=0;i<n;i++)
        {
            if((s[i]-'0')%2==0){
                
                v1.push_back((s[i]-'0'));
               // m1[i]++;
            }
            else{
             
                v2.push_back((s[i]-'0'));
                //m2[i]++;
                
        }              
            
        } 
        sort(v1.begin(),v1.end(),greater<int>());
        sort(v2.begin(),v2.end(),greater<int>());
        
      int i = 0;
         j = 0;
        string ans = "";
        for(int m = 0;m < s.size();m++)
        {
            int k = s[m]-'0';
           
            if(k&1)
            {
                ans += v2[i]+'0';
                i++;
            }
            else
            {
                ans += v1[j]+'0';
                j++;
            }
        }
       
        return stoi(ans);
    }
};