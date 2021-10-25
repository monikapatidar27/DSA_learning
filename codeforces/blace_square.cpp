#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int a,b,c,d;
    string str;
    cin>>a>>b>>c>>d;
    cin>>str;
    int res=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1'){
            res+=a;
        }
         if(str[i]=='2'){
            res+=b;
        }
         if(str[i]=='3'){
            res+=c;
        }
         if(str[i]=='4'){
            res+=d;
        }
    }
    cout<<res<<endl;
    
    return 0;
}