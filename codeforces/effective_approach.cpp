#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int n, a,m, b, ind[100001];
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cin>>a;
        ind[a] = i;
    }
    cin>>m;
    long long V=0, P=0;
    while (m--)
    {
       cin>>b;
        V += ind[b];
        P += (n + 1 - ind[b]);
    }
    cout<<V<<" "<<P<<endl;    
    
   return 0;
}