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
        ll b[n];
        loop(i,l,n){
            cin>>arr[i];
        }
        loop(i,l,n){
            cin>>b[i];
        }
        ll count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j){
                    if(arr[i] == b[j] && arr[j] == b[i]){
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;

    }
    return 0;
}