#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
   int n, k, l, c, d, p, nl, np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int x=(k*l)/nl;
   int y=c*d;
   int z=p/np;
   cout<<min(min(x,y),z)/n<<endl;

    return 0;
}