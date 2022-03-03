class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
      int size=nums.size();
      int total=0;
      for(int i=0;i<size-1;i++)
      {
          int diff=nums[i+1]-nums[i];
          for(int j=i+2;j<size;j++)
          {
              if(nums[j]-nums[j-1]==diff)
                  total++;
              else
                  break;
          }
          
          
      }
        return total;
    }
};