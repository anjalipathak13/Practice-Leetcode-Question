class Solution {
public:
    void game(int index,int n,int k,vector<int>&person)
    {
        if(person.size()==1)
            return;
        
      index=(index+k)%person.size();
        person.erase(person.begin()+index);
        game(index,n,k,person);
        
    }
    
 int findTheWinner(int n, int k) {
       vector<int>person;
         for(int i=1;i<=n;i++)
            person.push_back(i);
     
        game(0,n,k-1,person);
        return person[0];
    }
};