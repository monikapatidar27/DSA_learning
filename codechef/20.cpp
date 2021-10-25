#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int y,x,sum=0;
       string j ,s;
       cin>>j;
       cin>>s;
       x=j.length();
       y=s.length();
       
       for(int i=0;i<y;i++)
       {
           for(int k=0;k<x;k++)
           {
               if(j[k]==s[i])
               {
                   sum++;
                   break;
               }
           }
       }
       cout<<sum<<endl;
       
    }
}