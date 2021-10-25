#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
        return (n > 0 && (n & (n - 1)) == 0);
    }

int main()
{
    int nums;
    cin>>nums;
    cout << isPowerOfTwo(nums ) << '\n';
}