#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sp " "
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int ans=0,res=0,v=1;
       while(ans<n)
  {
    if(v%3!=0&&v%10!=3)
    {
      res=v;
      ans++;
    }
    v++;
  }
  cout<<res<<endl;
    }

    return 0;
}