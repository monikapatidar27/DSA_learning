#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    int maxSubArray(vector<int>& nums) {
        int maxc=INT_MIN,curr=0;
        for(int i=0;i<nums.size();i++){
            curr+=nums[i];
            if(curr>maxc)
            {
                maxc=curr;
            }
            if(curr<0)curr=0;
        }
        return maxc;
    }
   

int main()
{
    vector <int> nums1 = {1 , 3 , 5 ,0,0 , 0};
    
    
    cout <<maxSubArray (nums1)<< '\n';
    return 0;
}