class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0)
            return false;
    // 1 2 2 3 3 4 6 7 8
      //unordered_map<int,int>m;
       // vector<int>m(1000000000,0);
        map<int,int>m;
        for(auto i:hand){
            m[i]++;
            // cout<<m[i]<<" ";
        }
       /* sort(hand.begin(),hand.end());
        int c=0,ele=0;
        for(int i=0;i<hand.size();i++)
        {  
            ele=hand[i];
            
            if(m[ele]==0)
                continue;
            else{
                m[ele]--;
                //cout<<ele<<" ";
            }
            int j=1,s=0;
            while(j<groupSize)
            {
                ele=ele+1;
               if(m[ele]!=0){
                   m[ele]--;
                  // cout<<m[2]<<" ";
                   s++;
                   j++;
               }else
               {
                   break;
               }
            }
          if(j==groupSize)
            c++;
            
    }
      // cout<<c; 
        if(n/groupSize==c)
        return true;
        else
            return false;*/
        for(auto it: m){
            if(m[it.first]>0){
                for(int i = 1; i<groupSize; i++){
                    m[it.first+i] -= m[it.first];
                    if(m[it.first+i]<0){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};