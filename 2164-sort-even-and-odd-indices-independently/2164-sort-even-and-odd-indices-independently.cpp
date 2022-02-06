class Solution {
public:
    static bool cmp(int a,int b)
    {
        return a>b;
    }
    vector<int> sortEvenOdd(vector<int>& nums) {
      vector<int>odd;
        vector<int>even;
        int l=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
    
    sort(odd.begin(),odd.end(),cmp);
    sort(even.begin(),even.end());
       
   
    int j=0,k=0;
        vector<int>ans;
    for(int i=0;i<l;i++)
    {
        if(i%2==0 && j<even.size())
            ans.push_back(even[j++]);
          else if(i%2!=0 && k<odd.size())
              ans.push_back(odd[k++]);
        }
    
    return ans;
    }
};