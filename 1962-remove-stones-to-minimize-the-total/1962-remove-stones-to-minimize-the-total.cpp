class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
      priority_queue<int>pq;
        for(auto i:piles)
            pq.push(i);
        while(!pq.empty()&&k--)
        {
            int val=pq.top();
           
            pq.pop();
           
         //   cout<<n<<" ";
            pq.push(val-(val/2));
             
        }
        int sum=0;
     while(!pq.empty())
     {
       int num=pq.top();
         pq.pop();
         sum+=num;
     }
        return sum;
    }
};