class Solution {
public:
    bool isPowerOfTwo(int n) {
       
        int index = 0; 
        long long result = 0;
        
        while (result < n) {
            result = static_cast<long long>(pow(2, index));
            if (result == n) return true;
            index++;
        }
        
        return false; 
    }
};