#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    tle
    int t; cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(a+b<=d && c<=e){
            cout<<"Yes"<<endl;
        }
        else if(a+c<=d && b<=e){
            cout<<"Yes"<<endl;
        }
        else if(b+c<=d && a<=e)
        cout<<"Yes"<<endl;
        
        else{
            cout<<"No"<<endl;
        }
    }
}
 