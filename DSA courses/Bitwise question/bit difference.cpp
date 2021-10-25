#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int n = a^b;
        int count = 0;
        int temp = n;
        while(temp>>=1)
        count++;
        int ans=0;
       for(int i=0;i<count+1;i++) { 
           temp=n; 
           int x=(temp>>i)&1;
           if(x==1)
           ans++;
        }
        return ans;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends