#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first = -1, last = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                if(first == -1){
                    first = i;
                    last = i;
                }
                else
                    last = i;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
   

int main()
{
    vector <int> nums1 = {1 , 3 , 5 ,0,0 , 0};
     int m =0;
    
   // cout << searchRange(nums1,m)<< '\n';
    return 0;
}