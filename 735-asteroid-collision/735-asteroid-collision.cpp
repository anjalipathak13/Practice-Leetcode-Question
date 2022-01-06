class Solution {
public:
    vector<int> asteroidCollision(vector<int>& A) {
        vector<int> ans;
        
        for(int i=0;i<A.size();i++) {
            while(not ans.empty() && A[i]<0 && ans.back()>0 && abs(ans.back())<abs(A[i]))
                ans.pop_back();
            
            if(not ans.empty() && A[i]<0 && ans.back()>0 && abs(ans.back())==abs(A[i])) 
                ans.pop_back();
            else if(A[i]>0 || ans.empty() || A[i]<0 && ans.back()<0)
                ans.push_back(A[i]);
        }
        
        return ans;
    }
};