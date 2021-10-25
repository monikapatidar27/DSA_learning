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
        int a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        if((a ==a1 && b==b1)||(a==b1 && b==a1)){
            cout<<"1"<<endl;
        }
        else if((a ==a2 && b==b2)||(a==b2 && b==a2)){
            cout<<"2"<<endl;
        }
        else
        cout<<"0"<<endl;
    }
	return 0;
}
