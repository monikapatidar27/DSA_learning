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
    int x=0;
    while(t--){
         
       string s; cin>>s;
       if(s[1]=='+'){
		//if(s=="x++" || s=="++x" || s="++X" || s=="X++")
		x++;
       }
		else
		x--;
    }
	cout<<x;
    
	return 0;
}
