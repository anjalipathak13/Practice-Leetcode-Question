class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
int l=flowerbed.size();
    
        if(n==0) return true;
        
        if(n==1 && l==1 && flowerbed[0]==0) return true;
        
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0)
            {
                
                if((i!=0) && (i!=l-1) && (flowerbed[i-1]==0)&&(flowerbed[i+1]==0))
                {
                    flowerbed[i]=1;
                    n--;
                }               
                
                else if ((i==0) && (flowerbed[i+1]==0))
                {
                    flowerbed[i]=1;
                    n--;
                }
                else if ((i==l-1) && (flowerbed[i-1]==0))
                {
                    flowerbed[i]=1;
                    n--;
                }
            }
        }
        if(n<=0)
            return true;
        else 
            return false;
    }
};       
