#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    int searchInsert(vector<int>& nums, int target) {
        int pos=-1;
        int n=nums.size();
        int i;
        for(int i=0;i<n;i++){
            if(nums[i]==target ||nums[i]>target){
                pos=i;
                return pos;
            }
        }
        return n;
    }

int main()
{
    vector <int> nums = {1 , 3 , 5 , 7 , 9};
    int target = 8;
    cout << searchInsert(nums , target) << '\n';
}