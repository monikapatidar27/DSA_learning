#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
       long long  low=0;
        long long high=INT_MAX,ans=0;
        
        while(low<=high){
            
        long long mid=low+(high-low)/2;
            if(mid*mid<=x){
                ans=mid; 
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        
    }
        return ans;
    }
int main()
{
    int x=4;
    
    cout <<mySqrt(4) << '\n';
}