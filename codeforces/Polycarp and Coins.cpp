#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0){
            cout<<n/3<<sp<<n/3<<endl;
        }
        if(n%3==1){
            cout<<(n/3)+1<<sp<<n/3<<endl;
        }
        if(n%3==2){
            cout<<n/3<<sp<<(n/3)+1<<endl;
        }
    }

    return 0;
}