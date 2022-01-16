class Solution {
public:
  /* void game(int i,vector<int>& nums,int p1,int p2,int &a,int &b,bool &ans)
    {
         if(nums.size()==0)
         {
             if(p1>=p2)
                  ans=true;
             else
                 ans=false;
            return;
         }
        
        if(a==0)
        {
            p1=+nums[i];
            a=1;
            b=0;
            nums.erase(nums.begin()+i);
        } if(b==0)
        {
            p2+=nums[i];
            b=1;
            a=0;
            nums.erase(nums.begin()+i);
        }
        game(0,nums,p1,p2,a,b,ans);
        }*/
    
    
    
     /*   int turn =0;
        int p1=0;
        int p2=0;
        while(nums.size()!=0)
        {   int i=0,j=nums.size()-1;
            if(turn ==0)
            {
                if(nums[i]>nums[j]){
                      p1+=nums[i];
                      nums.erase(nums.begin());
                 }else{
                     p1+=nums[j];
                     nums.erase(nums.begin()+j);
                     }
                turn=1;
                
            }else{
               if(nums[i]<nums[j]){
                      p2+=nums[i];
                      nums.erase(nums.begin());
                 }else{
                     p2+=nums[j];
                     nums.erase(nums.begin()+j);
                     }
                turn=0;
                }
            
        }
        if(p1>=p2)
        {
            return true;
        }else{
            return false;
        }
    }*/
    
    
 int  func(vector<int>& nums,int i,int j,int chance)
 {
     if(i>j)
         return 0;
     if(chance==0)
     {
         return max(nums[i]+func(nums,i+1,j,1),nums[j]+func(nums,i,j-1,1));
     }else
     {
  return min(func(nums,i+1,j,0),func(nums,i,j-1,0));
 
     }
 }
bool PredictTheWinner(vector<int>& nums) {
    long long two=0;
    for(int i=0;i<nums.size();i++)
    {
        two+=(long long)nums[i];
    }
    int n=nums.size();
    long long one=(long long)func(nums,0,n-1,0);
        two-=one;
    return (one>=two);
}
};
    
    
    
