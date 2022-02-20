class Solution {
public:

    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int c=0;
        int left=-1,right=-1;
        for(int i=0;i<intervals.size();i++)
        {
           if(intervals[i][0]>left && intervals[i][1]>right){
               c++;
            left=intervals[i][0];
               
           } 
            right=max(right,intervals[i][1]);
        }
        return c;
    }
};