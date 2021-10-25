#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0, j = height.size() - 1;
            while (i < j) {
            int h = min(height[i], height[j]);
            water = max(water, (j - i) * h);
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
            }
    return water;   
    }
   

int main()
{
    vector <int> nums1 = {1 , 3 , 5 ,0,0 , 0};
    // int m;
    
    cout << maxArea(nums1)<< '\n';
    return 0;
}