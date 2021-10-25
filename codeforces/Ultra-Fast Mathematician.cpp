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
        if(s1[i]==s2[i])
        s1[i]='0';
        else
        s1[i]='1';
    }
    cout<<s1<<endl;

    return 0;
}