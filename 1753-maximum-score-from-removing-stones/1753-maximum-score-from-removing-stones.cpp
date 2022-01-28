class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
      
          pq.push(a);
          pq.push(b);
          pq.push(c);
      /*  int cn=0;
        while(1){
         int n1=p.top();
            p.pop();
              n1--;
            int n2=p.top();
            p.pop();
            
            n2--;
            cn++;
            if(n1==0 || n2==0)
                break;
            p.push(n1);
             p.push(n2);
           }
        return cn;*/
        int f=1;
        int ans=0;
        while(f)
        {
            int f=pq.top(); pq.pop();
            int s=pq.top(); pq.pop();
            if(f==0 || s==0)
                break;
            ans++;
            f--; s--;
            pq.push(f);
            pq.push(s);
        }
        return ans;
    }
};