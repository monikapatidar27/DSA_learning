#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    string s1,s2;
    cin>>s1>>s2;
    
    for(int i=0;i<s1.size();i++){
        if(s1[i]>='A'&& s1[i]<='Z')
        s1[i]+=32;
        if(s2[i]>='A'&& s2[i]<='Z')
        s2[i]+=32;

    }
    if(s1<s2)cout<<-1;
    else if(s1>s2)cout<<1;
    else cout<<0;
  
    
    return 0;
}