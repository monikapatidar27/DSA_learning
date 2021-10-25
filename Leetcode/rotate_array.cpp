#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rev(vector<int> &nums,int l,int r)
{
    int low=l;
    int high=r-1;
    while(low<=high)
    {
        swap(nums[low],nums[high]);
        low++;
        high--;
    }
}
    int rotate(vector<int>& nums, int k) 
    {
        k=k%(nums.size());
        int n=nums.size();   
        rev(nums,0,n-k);
        rev(nums,n-k,n);
        reverse(nums.begin(),nums.end());
    }

 
int main()
{
    vector <int> nums = {1 , 3 , 5 , 7 , 9};
    int k = 3;
    cout<< rotate(nums , k) << '\n';
}