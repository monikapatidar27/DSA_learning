#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
      for(int i=m, j=0;j<n;i++)
          nums1[i]=nums2[j++];
        sort(nums1.begin(),nums1.end());
  
    }
   

int main()
{
    vector <int> nums1 = {1 , 3 , 5 ,0,0 , 0};
    int m;
    vector <int> nums2 ={2,5,1} ;
    int n;
    cout << merge(nums1, 6, nums2, 3)<< '\n';
    return 0;
}