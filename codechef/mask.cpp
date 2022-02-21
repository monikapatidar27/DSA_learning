#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
       int x,y;
       cin>>x>>y;
       if((x-y)<=y){
           cout<<(x-y)<<endl;
       }
       else{
           cout<<y<<endl;
       }
    }
    return 0;
}