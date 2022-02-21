#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       string str;
       cin>>str;
        int res=0;
       for(int i=0;i<str.length();i++){
          int c=0;
           if(str[i]==1)
                c=0;
            else
                c++;
                res=max(res,c);
       }
       cout<<res<<endl;
       
    }
    return 0;
}