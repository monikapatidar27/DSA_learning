#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n-1; i++)
            if(nums[i] == nums[i+1])
                return true;
        return false;
    }

    
int main()
{
    vector <int> nums = {15 , 3 , 1 , 3 , 1};
    
    cout << containsDuplicate(nums ) << '\n';
}