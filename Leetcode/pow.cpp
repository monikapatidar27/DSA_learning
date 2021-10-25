#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n) {
         double res=1.0;
        for(int i=n;i;i/=2){
            if(i&1)res*=x;
            x*=x;
            
        }
        return n>=0?res:1/res;
    }
int main()
{
    int nums,num;
    cin>>nums>>num;
    cout << myPow(nums ,num) << '\n';
}