#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    tle
    int t; cin>>t;
    while(t--){
      ll n,m;
      cin>>n;
    //   if(n%2==0)
    //   {
    //      m=n/2;
    //      for(int i=1;i<=m;i++){
    //      cout<<n-1<<" "<<n<<" ";
    //      n-=2;
    //      }
    //   }
    //   else
    //   {
    //       for(int i=n;i>=n/2+1;i--)
    //       cout<<i<<" ";
    //       for(int i=1;i<=n/2;i++)
    //       cout<<i<<" ";
    //   }
    //   cout<<endl;
      for(int i=n;i>=1;i--)
      cout<<i<<sp;
    }
    return 0;
}
 