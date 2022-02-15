class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int>ans;
        
        if(tomatoSlices&1|| cheeseSlices*4<tomatoSlices || tomatoSlices/2<cheeseSlices)
            return ans;
        int jumbo=(tomatoSlices-(cheeseSlices*2))/2;
        int small=cheeseSlices-jumbo;
        ans.push_back(jumbo);
        ans.push_back(small);
        return ans;
    }
};