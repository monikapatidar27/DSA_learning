#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int n;
    cin>>n;
    int flg=1;
    while(n>0)
    {
        if(n%1000==144)
        {
            n/=1000;
            flg=1;
        }
        else if(n%100==14)
        {
            n/=100;
            flg=1;
        }

        else if(n%10==1)
        {
            n/=10;
            flg=1;
        }
        else
        {
            flg=0;
            break;
        }
    }
    if(flg==1)cout<<"YES";
    else cout<<"NO";
    return 0;
}