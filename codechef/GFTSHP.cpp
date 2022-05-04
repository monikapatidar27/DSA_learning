#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        loop(i, l, n) 
            cin >> v[i];
        sort(v.begin(), v.end());

        ll i = 0;
        ll itm = 0;
        while(i < n && k >= v[i]){
       		k -= v[i++];
       		itm++;
        }
       
        if(i < n && ceil(v[i]/2.0) <= k)
             itm++;
        cout << itm << endl;
    }
    return 0;
}