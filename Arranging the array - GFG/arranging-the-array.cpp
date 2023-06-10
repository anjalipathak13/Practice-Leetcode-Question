//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
      void merge(int *arr, int start, int end)
    {
        int mid = start + (end - start) / 2;

        int len1 = mid - start + 1;
        int len2 = end - mid;

        int *first = new int[len1];
        int *second = new int[len2];

        int k = start;
        for (int i = 0; i < len1; i++){
            first[i] = arr[k];
            k++;
        }

        for (int i = 0; i < len2; i++){
            second[i] = arr[k];
            k++;
        }

        int index1 = 0;
        int index2 = 0;

        k = start;

        while (index1 < len1 && index2 < len2)
        {
            // copy negitive elements first
            if (first[index1] < 0)
            {
                arr[k++] = first[index1++];
            }
            else if (second[index2] < 0)
            {
                arr[k++] = second[index2++];
            }

            // copy element that is encountered first
            else{
                arr[k++] = first[index1++];
            }
        }

        while (index1 < len1)
        {
            arr[k++] = first[index1++];
        }

        while (index2 < len2)
        {
            arr[k++] = second[index2++];
        }
    }

    void mergeSort(int *arr, int start, int end)
    {
        if (start >= end)
            return;

        int mid = start + (end - start) / 2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
    
        merge(arr, start, end);
    }

public:
    void Rearrange(int arr[], int n)
    {
        mergeSort(arr, 0, n-1);
    }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends