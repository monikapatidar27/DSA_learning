#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int d=n-(a*i)-(b*j);
            if(d%c==0){
                int total=i+j+(d/c);
				res=max(res,total);
            }
        }
    }
    cout<<res;
   return 0;
}