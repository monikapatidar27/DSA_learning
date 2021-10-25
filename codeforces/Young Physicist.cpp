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
    int t,a,x,y,z,b,c;
    cin >> t;
    a=0,b=0,c=0;
    while(t--){
    cin >>x >> y >> z;
    a+=x;
    b+=y;
    c+=z;
    }
    if(a==0 && b==0 && c==0){
    cout<<"YES"<<endl;
    }
    else {
    cout<<"NO"<<endl;
    } 
    return 0;
}