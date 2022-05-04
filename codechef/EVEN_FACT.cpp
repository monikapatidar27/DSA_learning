#include <bits/stdc++.h>
using namespace std;
#define loop(i, l, n) for (int i = 0; i < n; i++)
#define loop1(i, l, n) for (int i = 1; i <= n; i++)
#define endl "\n"
typedef long long int ll;
#define sp " "

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        int sum=0;
        for (int i = 1; i*i <= n; i++)
        {
            if(i%2==0 && n%i==0){
                sum=sum+i;
            }    
              ll sn=n/i;
              if(i*i!=n && sn%2==0 && n%sn==0)
                sum+=sn;
            
        }
        cout<<sum<<endl;
        
    }
    return 0;
}