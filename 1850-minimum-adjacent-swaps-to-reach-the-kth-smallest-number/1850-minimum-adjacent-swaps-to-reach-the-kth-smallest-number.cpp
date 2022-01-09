class Solution {
public:
    int getMinSwaps(string nums, int k) {
       int n=nums.size();
        int c=0;
        string src=nums;
        while(k--)
            next_permutation(nums.begin(),nums.end());
      //int c=0;
        for(int i=0;i<n;i++)
        {
            int j=i;
            if(src[i]!=nums[j])
            {
                while(nums[j]!=src[i])
                    i+=1;
                while(i>j)
                {
                    swap(src[i],src[i-1]);
                    i--;
                    c++;
                }
                    }
               }
        return c;
    }
};