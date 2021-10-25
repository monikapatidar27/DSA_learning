#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int res=0, n=nums.size();
    for(int i=0;i<n;i++)
    {
        res+=nums[i];
    }
    
    return (n*(n+1)/2)-res;
}
    
int main()
{
    vector <int> nums = { 4 , 1 , 3 , 5};
    
    cout << missingNumber(nums ) << '\n';
}