class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       map<int,int>m;
        for(auto i:tasks)
            m[i]++;
        int c=0;
        for(auto i:m)
        {
            if( i.second==1){
                return -1;
                }
            c+=i.second/3;
            if(i.second%3)
                c++;
                
        }
        return c;
    }
};