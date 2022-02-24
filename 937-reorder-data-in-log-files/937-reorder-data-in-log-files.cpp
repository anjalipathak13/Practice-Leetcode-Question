class Solution {
public:
    static bool cmp(string &a,string &b){
        string aa=a.substr(a.find(' '));
        string bb=b.substr(b.find(' '));
        if(aa==bb)
            return a<b;
        else
          return aa<bb;
 }
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string>al;
         vector<string>di;
        
       for(auto log:logs)
       { 
        if(log.back() <= 'z' and log.back() >= 'a')
           al.push_back(log);
            else
          di.push_back(log);
           
       }
      sort(al.begin(),al.end(),cmp); 
        for(auto i:di)
            al.push_back(i);
        return al;
    }
};