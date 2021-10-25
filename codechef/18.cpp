

#include<bits/stdc++.h>
using namespace std;
void solve()
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
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        solve();
    }
}



/* same question 
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   cin.get();
    while(t--){

    string s;
    getline(cin,s);
    int yes=0;
    int upp=0,digit=0,space=0;
    if(isdigit(s[0]))
        yes++;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
            upp++;
        else if(isdigit(s[i]))
            digit++;
        else if(s[i]==' ' || s[i]=='/')
            space++;

    }
    if((upp>=1) && (digit>=1) && (yes==0) && (space==0) && (s.size()>=4))
        cout<<1<<"\n";
    else
        cout<<0<<"\n";
   }
   return 0;
}
*/