#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
       int n,x,y;
       cin>>n>>x>>y;
       int a[n];
       int b[n];
       int res=0;
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       for(int i=0;i<n;i++){
           cin>>b[i];
       }
       for(int i=0;i<n;i++){
           int c=b[i]-a[i];
           if(c==x||c==y){
               res++;
           }
           else
               res=0;
           
       }
       if(res==n){
           cout<<"yes"<<endl;
       }
       else{
           cout<<"no"<<endl;
       }
    }
    return 0;
}