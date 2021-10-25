#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int t,m,a,b,res = 0;
    cin >> t >> m;
    while(t--){
        for(int j = 0; j < m; j++){
            cin >> a >> b;
            if(a == 1 || b == 1)
            res++;
        }
    }
    cout << res << endl;
    return 0;
}