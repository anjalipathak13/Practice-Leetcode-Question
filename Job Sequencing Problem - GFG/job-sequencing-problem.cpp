//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr, arr + n, [&](Job a, Job b)->bool {
        if(a.profit > b.profit) 
            return true; 
        return false; 
    });
    
//     for(int i = 0; i < n; i++) 
//         cout << arr[i].dead << " " << arr[i].profit << endl; 
    
    vector<int> temp(n, -1); 
    
    for(int i = 0; i < n; i++) 
    {
        int ind = arr[i].dead - 1; 
        while(ind >= 0 and ind < n) 
        {
            if(temp[ind] == -1)
            {
                temp[ind] = arr[i].profit;
                break; 
            }
            ind--;
        }
    }
    
    int cntJob = 0, maxProfit = 0;
    for(int i = 0; i < n; i++) 
    {
        if(temp[i] != -1) 
            cntJob++, maxProfit += temp[i]; 
//         cout << temp[i] << endl; 
    }
    
    return {cntJob, maxProfit};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends