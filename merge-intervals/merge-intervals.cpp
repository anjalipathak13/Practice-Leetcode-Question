class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0)
            return intervals;
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> ans;
        vector<int> temp;
        temp=intervals[0];
        
        for(auto it:intervals)
        {
            if(it[0]<=temp[1]){
                temp[1]=max(temp[1],it[1]);
            }
            else{
                ans.push_back(temp);
            temp=it;
            }
        }
        
        ans.push_back(temp);
        return ans;
    }
};