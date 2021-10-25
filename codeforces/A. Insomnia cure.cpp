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
    int k, l, m, n, d;
    int cont = 0;
    
    cin >> k >> l >> m >> n >> d;
    cont = d;
    
    if(k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d << endl;
    }
    else
    {
        for(int i = 1; i <= d; i++)
        {
            if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                cont--;
        }
        cout << cont << endl;
    }
    return 0;
}