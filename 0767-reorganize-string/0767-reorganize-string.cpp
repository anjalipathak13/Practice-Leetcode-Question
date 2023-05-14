class Solution {
public:
    string reorganizeString(string s) {
       int n = s.length();
        unordered_map<char,int>m;
        
        for(int i=0 ; i<n ; i++){
            m[s[i]]++;
        }
        
        priority_queue<pair<int,char>>pq;
        for(auto i:m){
            if(i.second>0)
                pq.push({i.second,i.first});
            if(i.second>(n+1)/2)      //check if the freq of any ele is > half of str(alternate                                              place) agar true h toh same ele adj place ho jayege 
                return "";
        }
        
        string ans="";
        while(pq.size()>=2){
            auto p1 = pq.top();
            pq.pop();
            
            auto p2 = pq.top();
            pq.pop();
            
            ans+=p1.second;
            ans+=p2.second;
            
            p1.first--;
            p2.first--;
            
            if(p1.first>0)  pq.push({p1.first,p1.second});
            if(p2.first>0)   pq.push({p2.first,p2.second});
            
        }
        
        while(!pq.empty()){
            ans+=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};