class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int moves=0;
       while(maxDoubles!=0 && target!=1)
       { 
           if(target%2==0 )
           {
               target=target/2;
               maxDoubles--;
               moves++;
           }else
           {
               target--;
               moves++;
           }
           
       }
        if(target!=1)
        {
            moves+=target-1;
        }
       return moves;
    }
};