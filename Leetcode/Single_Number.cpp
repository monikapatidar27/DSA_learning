#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
int main()
{
    vector <int> nums = {15 , 3 , 1 , 3 , 1};
    
    cout << singleNumber(nums ) << '\n';
}