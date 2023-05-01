class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        double ans=0;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for(int i=0;i<salary.size();i++){
            maxi = max(maxi,salary[i]);
            mini = min(mini,salary[i]);
        }
        
        for(int i=0;i<salary.size();i++){
            if(salary[i]!=mini && salary[i]!=maxi)
                sum+=salary[i];
        }
        int n = salary.size()-2;
        ans = sum/n;
        return ans;
    }
};