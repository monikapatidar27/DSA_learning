//https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1/?track=DSASP-BitMagic&batchId=154

#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        if(n>=1){
            int a=(n)^(n-1);
            return log2(a+1);
        }
        else
        return 0;
    }
};

int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
  