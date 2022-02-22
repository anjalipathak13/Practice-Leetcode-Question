static string str;
class Solution {
public:
    
    static bool cmp(char a, char b)
    {
        return str.find(a)<str.find(b);
    }
        
    string customSortString(string order, string s) {
        str=order;
        sort(s.begin(),s.end(),cmp);
        return s;
    }
};