#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    int max = A[0];
    int min = A[0];
    int sum=0;
    for ( int i = 1;i< N-1;i++ )
    {
        if ( A[i] > max )
            max = A[i];
        
    }
    for ( int i = 1;i< N-1;i++ )
    if ( A[i] < min )
            min = A[i];
    sum=max+min;
    return sum;
}
};

// { Driver Code Starts.
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
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}
  // } Driver Code Ends