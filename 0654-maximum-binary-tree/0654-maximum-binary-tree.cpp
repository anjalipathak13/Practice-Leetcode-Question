/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxNum(vector<int>nums){
        int maxi = INT_MIN;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi = nums[i];
                ans = i;
            }
        }
        return ans;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        
        int index = maxNum(nums); //will provide max num
        TreeNode* curr = new TreeNode(nums[index]);
        
        vector<int>left(nums.begin(),nums.begin()+index);
        vector<int>right(nums.begin()+index+1,nums.end());
        
        curr->left =  constructMaximumBinaryTree(left);
        curr->right =  constructMaximumBinaryTree(right); 
        
        return curr;
    }
};