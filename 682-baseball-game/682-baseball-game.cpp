class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>v;
      //  int ans=0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
             int j=v.size();
                int a=v[j-1]+v[j-2];
                v.push_back(a);
             }else if(ops[i]=="D")
            {
                int b=2*v[v.size()-1];
                v.push_back(b);
            }else if(ops[i]=="C")
            {
                v.pop_back();
                
            }else
            {
                v.push_back(stoi(ops[i]));
            }
        }
        return accumulate(v.begin(),v.end(),0);  ;
    }
};