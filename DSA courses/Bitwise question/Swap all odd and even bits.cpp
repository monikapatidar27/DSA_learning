//https://practice.geeksforgeeks.org/problems/swap-all-odd-and-even-bits-1587115621/0/

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	unsigned int swap=0;
        int i=0;
        while(n)
    {
        int odd_bit=n%2;
        int even_bit=(n/2)%2;
        swap+=(even_bit<<i)+(odd_bit<<(i+1)); 
        i+=2; 
        n=n/4; 
        
    } 
    return swap;// Your code here
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends