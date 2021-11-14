#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sp " "
int main(){
    int t;
    cin>>t;
    while(t--){
       int x ,y,a,b,k;
       cin>>x>>y>>a>>b>>k;
       for(int i=0;i<k;i++){
           x=x+a;
           y=y+b;
       }
       if(x<y){
           cout<<"PETROL"<<endl;
       }
        else if(x==y){
           cout<<"SAME PRICE "<<endl;
       }
       else
        cout<<"DIESEL "<<endl;
    }
   return 0;
}