#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>& nums) {
        int n=size(nums);
        if(n==1)
            return 0;
        int low=0, high=n-1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(mid==0)
            {
                if(nums[mid]>nums[mid+1])
                    return mid;
            }
            else if(mid==n-1)
            {
                if(nums[mid]>nums[mid-1])
                    return mid;
            }
            else if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])
                    return mid;
            if(nums[mid+1]>nums[mid])
                low = mid+1;
            else 
                high = mid-1;
            
        }
        return -1;
    }
   

int main()
{
    vector <int> nums1 = {1 , 3 , 5 ,0,0 , 0};
    // int m;
    
    cout << findPeakElement(nums1)<< '\n';
    return 0;
}