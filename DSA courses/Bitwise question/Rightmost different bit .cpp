// https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1#

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if(n==m)
        return -1;

        int ans = n^m ;
        if(ans&1) return 1;
        int count=1;
        while(!(ans&1))
        {
        count++;
        ans>>=1;
        }
        return count;// Your code here
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends