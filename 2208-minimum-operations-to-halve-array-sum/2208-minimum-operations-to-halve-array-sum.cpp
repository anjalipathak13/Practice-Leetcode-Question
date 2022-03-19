class Solution {
public:
//int in=0;
/*int findi(vector<int>& nums)
{
int ele=0;
for(int i=0;i<nums.size();i++)
{
if(ele<=nums[i]){
ele=nums[i];
in=i;   
}
        
} 
return ele;
}
    int halveArray(vector<int>& nums) {
     int sum=0;
        for(auto i:nums)
            sum+=i;
        int half=sum/2;
        int c=0;
        int sum1=sum;
        while(1)
        {
            if((sum1-sum)>=half)
                break;
            int maxi=findi(nums);
            cout<<maxi<<" ";
            sum=sum-(maxi/2);
           cout<<sum<<" ";
            nums[in]=nums[in]/2;
            c++;
            in=0;
            
        }
      return c;  */
    
    int halveArray(vector<int>& nums) {
        double sum=0;
        int n=nums.size()-1;
         priority_queue<double> pq;
        for(auto x:nums){
            sum+=x;
            pq.push(x);
        }
        double sum1=sum;
        double target = sum/2.0;
        int res=0;
        while(!pq.empty()){
            double val=pq.top();
            pq.pop();
            val=val/2.0;
            sum-=val;
            pq.push(val);
            res++;
            if(double(sum1-sum)>=target){
                break;
            }
        }
        return res;
    }
};