#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    string s;
    cin>>s;
    int counter=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>=33&&s[i]<=126)
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            counter++;
        }
        
    }
    if(counter>0)cout<<"YES";
    else cout<<"NO";

  
    
    return 0;
}