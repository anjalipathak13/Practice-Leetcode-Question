class Solution {
public:
    int minSteps(int n) {
    /*  if(n==1)
          return 0;
        int ans=0;
        if(n%2==0)
        {
            ans+=1;
            ans+=(n/2)-1;
            ans+=2;
            
        }else
        {
            ans+=n;
        }
       return ans; 
    }
};
//aaaaaaaaaa-7
//aaaaaaa-7
// aaaaa   
// 5  6 7 
//aaaa
3*/
int curr=1;
int pres=0;
int count=0;
        while(curr<n)
        {
            int rest=n-curr;
            if(rest%curr==0)
            {
                pres=curr;
                curr+=pres;
                count+=2;
            }else
            {   
                curr+=pres;
                count++;
            }
        }
        
    return count;
    }
};
