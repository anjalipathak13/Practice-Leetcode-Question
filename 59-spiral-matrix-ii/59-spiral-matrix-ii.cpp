class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int> > matrix( n, vector<int>(n) );
        int t=0,l=0,b=n-1,r=n-1;
        int dir=0;
        int number=1;
        vector<int>ans;
        while(t<=b && l<=b)
        {
            if(dir==0)
            {
                for(int i=l;i<=r;i++){
                  matrix[t][i]=number;
                    number++;
                }
                t++;
            }
            
            if(dir==1)
            {
                for(int i=t;i<=b;i++){
                  matrix[i][r]=number;
                    number++;
                }
                r--;
            }
            
            if(dir==2)
            {
                for(int i=r;i>=l;i--){
                  matrix[b][i]=number;
                    number++;
                }
                b--;
            }
            
            if(dir==3)
            {
                for(int i=b;i>=t;i--){
                  matrix[i][l]=number;
                    number++;
                }
                l++;
            }
            
           dir=(dir+1)%4; 
            
        }
        
       return matrix; 
    }
};