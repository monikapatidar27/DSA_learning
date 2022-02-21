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
      int x,y; cin>>x>>y;
      if(y==0) {
          cout<<x<<endl;
      }   
      else if(x==y){
          cout<<(x+y)-1<<endl;
      }
      else if(x>y){
          cout<<x+y<<endl;      
        }
    } 
   return 0; 
} 
