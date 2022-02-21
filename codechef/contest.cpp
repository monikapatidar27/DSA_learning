#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
       int x,y,z;
       cin>>x>>y>>z;
       int a=x*y;
       int b=x*z;
       cout<<b-a<<endl;
    }
    return 0;
}