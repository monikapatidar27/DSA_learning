#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
       long long int sum = 0, temp , r;
        temp = x ;
        while(x > 0){
            r = x % 10 ;
            sum = sum *10 + r ;
            x /= 10;
        }
        if(temp == sum){
            return true;
        }
        else return false;
     
    }
int main()
{
    int nums;
    cin>>nums;
    cout << isPalindrome(nums ) << '\n';
}