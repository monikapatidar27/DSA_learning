#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int t,a,b,c,res = 0;
    cin >> t ;
    while(t--){
        int a,b,c,res=0;
        
        cin>>a>>b>>c;
        res = b*3 - (a-b);
        if(res>=c){
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"FAIL"<<endl;
        }
    }
        return 0;
}