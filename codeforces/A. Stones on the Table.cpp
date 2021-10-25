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
    string s;
    cin>>s;
    int r=0,b=0,g=0;
    for(int i=1;i<t;i++){
 	if(s[i-1]==s[i])
 	if(s[i]=='R'){
    ++r;
    }
 	else if(s[i]=='G'){
 		++g;
 	}
 	else if(s[i]=='B')
 	++b;
 }
 cout<<r+g+b;
    return 0;
}