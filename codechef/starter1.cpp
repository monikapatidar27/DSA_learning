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
       int x; cin>>x;
        if(x%4==0){
           cout<<"North"<<endl;;
       }
       
       else if(x%4==1){
           cout<<"East"<<endl;
       }
       else if(x%4==2)
       cout<<"South"<<endl;
       else
       cout<<"West"<<endl;
}    
   return 0;
}