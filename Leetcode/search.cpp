#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
            if(nums[i]==target){
                return i;
            }
        
        return -1;
    }

 
int main()
{
    vector <int> nums = {1 , 3 , 5 , 7 , 9};
    int k = 3;
    cout<< search(nums , k) << '\n';
}