class Solution {
    
      public int[] getConcatenation(int[] nums) {
        
		// creating the array that will be outputed
		// length is 2 * nums because there nums will be stored in it twice
        int[] ans = new int[nums.length*2];
        
		// for loop to add elements from nums to ans
        for (int i = 0; i < nums.length; i++) {
            ans[i] = nums[i]; // setting elements 0 to nums.length-1
            ans[i+nums.length] = nums[i]; //setting elements from nums.length to nums.length*2
        }
        return ans;
    }
}