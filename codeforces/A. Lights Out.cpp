
#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int x11, x12, x13, x21, x22, x23, x31, x32, x33;
    cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;
    cout << ((x11 + x12 + x21) % 2 == 0 ? "1" : "0") << ((x11 + x12 + x13 + x22) % 2 == 0 ? "1" : "0") << ((x12 + x13 + x23) % 2 == 0 ? "1" : "0") << endl;
    cout << ((x11 + x21 + x22 + x31) % 2 == 0 ? "1" : "0") << ((x12 + x21 + x22 + x23 + x32) % 2 == 0 ? "1" : "0") << ((x13 + x22 + x23 + x33) % 2 == 0 ? "1" : "0") << endl;
    cout << ((x21 + x31 + x32) % 2 == 0 ? "1" : "0") << ((x22 + x31 + x32 + x33) % 2 == 0 ? "1" : "0") << ((x23 + x32 + x33) % 2 == 0 ? "1" : "0") << endl;

    return 0;
}