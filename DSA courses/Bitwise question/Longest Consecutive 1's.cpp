
//https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int count=0,maxcount=0;
        while(N!=0){
            if(N&1==1){
                count++;
            }
            else{
                count=0;
            }
            maxcount=max(count,maxcount);
            N=N>>1;
        }
        return maxcount;
    }
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends