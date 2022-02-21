#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
      int n,k,x;
      cin>>n>>k>>x;
      if(x>k){
          cout<<"-1"<<endl;
      }
      else{
          int p=0;
          for(int i=0;i<n;i++){

            if(p>=x)p=0;
            cout <<p<<" ";
            p++;
        }
      }
       cout<<endl;
    }
    return 0;
}