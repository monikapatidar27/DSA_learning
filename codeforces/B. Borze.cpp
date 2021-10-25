#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    tle
    string s,str;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i] == '.'){
            str+='0';
        }
        if(s[i]=='-' && s[i+1]== '.'){
            str+='1';
            ++i;
        }
        if(s[i]=='-' && s[i+1]== '-'){
            str+='2';
            ++i;
        }
    }   
        cout<<str<<endl;

    

    return 0;
}