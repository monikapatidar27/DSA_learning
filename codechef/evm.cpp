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
    
   
    int t; 
    cin >> t; 
    while (t--) { 
      int a,b,c,p,q,r;
      cin>>a>>b>>c>>p>>q>>r;
        
        int d=(p+q+r)/2;
        if(a+b+r>d || a+q+c>d || p+b+c>d ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    } 
   return 0; 
} 
