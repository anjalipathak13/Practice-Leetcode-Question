class Solution {
public:
    
    int getDecimalValue(string s) {
        int num = 0;
        for (char c : s) {
            num |= 1 << (c - 'a');
        }
        // cout << num << endl;
        return num;
    }
    
    int maxProduct(vector<string>& words) {
        int n = words.size();
        
		
        if (n<2) return 0;
        
		
        vector<int> arr(n);
        
        for (int i = 0; i<n; i++) {
            arr[i] = getDecimalValue(words[i]);
        }
        
  int res = 0;
        for (int i = 0; i<n; i++) {
            for (int j = i+1; j<n; j++) {
			
				
                if ((arr[i]&arr[j]) == 0) res = max(res, (int)words[i].size() * (int)words[j].size());
            }
        }
        
        return res;
    }
};