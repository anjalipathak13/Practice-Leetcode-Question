class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int n=digits.size();
        int sum=0;
         int carry =0;
        for(int i=n-1;i>=0;i--)
        {   
            if(i==n-1){
                sum=digits[n-1]+1;
                if(sum!=10){
                    ans.push_back(sum);}
                else{
                     ans.push_back(sum%10);
                carry=sum/10;
                }
                
            }else{
                
               int sum = digits[i] + carry; 
            carry = sum / 10;
            sum  = sum % 10;
            ans.push_back(sum);
        }
        }
        if(carry!=0)
            ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};