#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end(),greater<int>());    
    return nums[k-1];
}
   

int main()
{
    vector <int> nums1 = {1 , 3 , 5 ,0,0 , 0};
    int m;
    
    cout << findKthLargest(nums1, 2)<< '\n';
    return 0;
}