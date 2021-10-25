#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char findTheDifference(string s, string t) {
       
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < t.size(); i++)
            if (t[i] != s[i])
                return t[i];
        return t.back();
    }

int main()
{
    vector <string> nums1 = {"andn"};
    
    vector <string> nums2 = {"andna"};
   // cout << findTheDifference(nums1, nums2)<< '\n';
    return 0;
}