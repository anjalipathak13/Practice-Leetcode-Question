//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
// A utility function to check if num has all 9s
	int AreAll9s(int *num, int n) {
	    int i;
	    for (i = 0; i < n; ++i)
	        if (num[i] != 9) return 0;
	    return 1;
	}
public:
	// Returns next palindrome of a given number num[].
	// This function is for input type 2 and 3
	void generateNextPalindromeUtil(int num[], int n) {
	    // find the index of mid digit
	    int mid = n / 2;

	    // A bool variable to check if copy of left side to right is sufficient or
	    // not
	    bool leftSmaller = false;

	    // end of left side is always 'mid -1'
	    int i = mid - 1;

	    // Beginning of right side depends if n is odd or even
	    int j = (n % 2) ? mid + 1 : mid;

	    // Initially, ignore the middle same digits
	    while (i >= 0 && num[i] == num[j]) i--, j++;

	    // Find if the middle digit(s) need to be incremented or not (or copying
	    // left
	    // side is not sufficient)
	    if (i < 0 || num[i] < num[j]) leftSmaller = true;

	    // Copy the mirror of left to tight
	    while (i >= 0) {
	        num[j] = num[i];
	        j++;
	        i--;
	    }

	    // Handle the case where middle digit(s) must be incremented.
	    // This part of code is for CASE 1 and CASE 2.2
	    if (leftSmaller == true) {
	        int carry = 1;
	        i = mid - 1;

	        // If there are odd digits, then increment
	        // the middle digit and store the carry
	        if (n % 2 == 1) {
	            num[mid] += carry;
	            carry = num[mid] / 10;
	            num[mid] %= 10;
	            j = mid + 1;
	        } else
	            j = mid;

	        // Add 1 to the rightmost digit of the left side, propagate the carry
	        // towards MSB digit and simultaneously copying mirror of the left side
	        // to the right side.
	        while (i >= 0) {
	            num[i] += carry;
	            carry = num[i] / 10;
	            num[i] %= 10;
	            num[j++] = num[i--]; // copy mirror to right
	        }
	    }
	}

public:
	// The function that prints next palindrome of a given number num[]
	// with n digits.
	vector<int> generateNextPalindrome(int num[], int n) {
	    int i;
	    vector<int> ans;
	    // Input type 1: All the digits are 9, simply o/p 1
	    // followed by n-1 0's followed by 1.
	    if (AreAll9s(num, n)) {
	        ans.push_back(1);
	        for (i = 1; i < n; i++) ans.push_back(0);
	        ans.push_back(1);
	    }
	    // Input type 2 and 3
	    else {
	        generateNextPalindromeUtil(num, n);

	        // print the result
	        for (i = 0; i < n; i++) {
	            ans.push_back(num[i]);
	        }
	    }
	    return ans;
	}

};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends