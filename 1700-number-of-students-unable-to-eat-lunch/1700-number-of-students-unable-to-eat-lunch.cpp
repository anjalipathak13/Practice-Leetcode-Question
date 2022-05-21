class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i=0;i<students.size();i++)
        q.push(students[i]);
        
        int ptr=0;
        
        while(!q.empty())
        {
            int n=q.size();
            if(q.front()==sandwiches[ptr])
            {
                ptr++;
                q.pop();
            }
            else
            {
                int flag=0;
                while(n--)
				{                                  
                    
                    int temp=q.front();
                    q.pop();
                    q.push(temp);
                    if(q.front()==sandwiches[ptr])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    break;
                }
            }
        }
        return q.size();
    }
};