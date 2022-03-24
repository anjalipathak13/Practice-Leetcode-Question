class Solution {
public:
int numRescueBoats(vector<int>& people, int limit) {
    sort(people.begin(),people.end());
    int n=people.size();
    int count=0,ans=0,i=0,j=people.size()-1;
    while(i<=j)
    {
       
        if(people[i]+people[j]<=limit)
        {
            i++;
            j--;
        }
        else
        {
            j--;
        }
            count++;
            
        
    } //1 2 2 3
    return count;
    }
};