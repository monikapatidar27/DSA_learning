#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
       int n;cin>>n;
       int arr[n];
       int res=0,count=1;
       for(int i=0;i<n;i++){
           cin>>arr[i];
           if(arr[i]%2==1){
               res++;
           }
       }
       if(res%2==1){
           res-=1;
       }
       cout<<res/2<<endl;
       
    }
return 0;
}