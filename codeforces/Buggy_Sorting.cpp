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
    if(n<=2) 
    cout<<"-1";
    else
    {
        for(int i=0;i<n-2;i++)
        {
            cout<<n-i<<" ";
        }
        cout<<"2 1";
    }
     

    return 0;
}