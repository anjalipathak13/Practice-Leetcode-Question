class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int res = 0;
        
        for (auto& a: arr1) {
            for (auto& b: arr2) {
                if (abs(a - b) <= d) {
                    ++res;
                    break;
                }
            }
        }
        
        return arr1.size() - res;
    }
};