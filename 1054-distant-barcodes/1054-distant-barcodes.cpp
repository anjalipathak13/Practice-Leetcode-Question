class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
       unordered_map<int,int>m;
        for(int i=0;i<barcodes.size();i++)
        {
            m[barcodes[i]]++;
            
        }
       
        priority_queue<pair<int, int>> p;
        for(auto it:m)
        {
            p.push({it.second,it.first});
        }
        vector<int>ans;
        while(!(p.empty()))
        {
            pair<int,int>n1=p.top();
            p.pop();
            ans.push_back(n1.second);
            n1.first--;
           if(!(p.empty())){
            pair<int,int>n2=p.top();
            p.pop();
            ans.push_back(n2.second);
            n2.first--;
                if(n2.first>0)
                p.push(n2);}
           if(n1.first>0)
               p.push(n1);
           
         }
        return ans;
    }
};