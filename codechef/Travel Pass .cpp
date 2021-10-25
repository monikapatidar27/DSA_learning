#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
//#define tle ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sp " "
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int sum=0;

        for(int i=0;i<n;i++){
           if(s[i]=='0'){
               sum+=a;
           }
           else{
               sum+=b;
           }
           
       }

 cout<<sum<<endl;
    }

   

    return 0;
}