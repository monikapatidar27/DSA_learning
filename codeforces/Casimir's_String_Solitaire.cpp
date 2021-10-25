#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main()
{
   int t; cin>>t;
   while(t--){
       string s;
       cin>>s;
       int a=0,b=0,c=0;
       for(int i=0;i<s.length();i++)
       {
            if(s[i]=='A')
            a++;
            else if(s[i]=='B')
            b++;
            else 
            c++;
        } 
        if(b==(a+c))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
   }


    return 0;
}
 