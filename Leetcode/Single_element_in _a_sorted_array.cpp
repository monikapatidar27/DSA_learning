#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    int singleNonDuplicate(vector<int>& nums) {
       int left = 0, right = nums.size() - 1;
	    while(left < right){
		   int mid = (left + right)/2;
		   if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
			left = mid + 1;
		else
			right = mid;
	}
	return nums[left]; 
    }
int main()
{
    vector <int> nums = {15 , 3 , 1 , 3 , 1};
    
    cout << singleNonDuplicate(nums ) << '\n';
}