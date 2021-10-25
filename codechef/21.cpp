#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    string s;
    getline(cin,s);
    int x = s.size() ,cnt=0,abc=0,spc=0;
    for(int i=0;i<x;i++)
    {
           if(s[i] >= '0' && s[i] <= '9')
            {
                  cnt++;
            }
             if(s[i] >= 'A' && s[i] <= 'Z')
            {
                 abc++;
            }
              if(s[i] ==' ' || s[i]=='/')
            { 
                spc=1;
            }
    }

    if(x>=4 && (isdigit(s[0]) == false) && cnt > 0 && abc>0 && spc != 1)
    {
       cout<<1<<endl;
    }
    else
    {
         cout<<0<<endl;
    }

}

