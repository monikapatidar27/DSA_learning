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
        ll n;
        cin>>n;
        ll arr[n];
        int sum=0;
        loop(i,l,n){
            cin>>arr[i];
            sum+=arr[i];
        }
        loop(i,l,n){
            cout<<(arr[i]-sum/(n+1))<<" ";
        }
        cout<<endl;
    }
    return 0;
}