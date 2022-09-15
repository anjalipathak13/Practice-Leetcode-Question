class Solution {
public:
    int findLengthOfLCIS(vector<int>& a) {
       int mx = 0;
        for (int i = 0, j = 0; j < a.size(); j++) {
            if (j == 0 || a[j] <= a[j - 1]) i = j;
            mx = max(mx, j - (i - 1));
        }
        return mx;
       
    }
};