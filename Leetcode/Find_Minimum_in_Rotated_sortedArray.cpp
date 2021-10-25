#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        while(start<end){
            int mid = (start+end)/2;
            if(nums[mid]>nums[end]) 
                start = mid+1;
            else 
                end = mid;
        }
        return nums[start];
}
   

int main()
{
    vector <int> nums1 = {1 , 3 , 5 ,0,0 , 0};
    // int m;
    
    cout << findMin(nums1)<< '\n';
    return 0;
}