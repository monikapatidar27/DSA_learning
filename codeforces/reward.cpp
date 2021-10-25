#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
   int a1,a2,a3,b1,b2,b3,n;
   cin>>a1>>a2>>a3>>b1>>b2>>b3;
   cin>>n;
   int m=ceil((a1+a2+a3)/5);
   int na=ceil((b1+b2+b3)/10);
   int res=m+n;
   if(res<=n){
       cout<<"YES"<<endl;
   }
   else
        cout<<"NO"<<endl;
    return 0;
}