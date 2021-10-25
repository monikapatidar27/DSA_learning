#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    string str;
    cin>>str;
    int low=0,up=0;
    for(int i=0;i<str.size();i++){
        if(isupper(str[i])){
            up++;
        }
        else
        low++;
    }
    if(up>low){
        char ch;
        for(int i=0;i<str.size();i++){
            ch=toupper(str[i]);
            cout<<ch;
        }
    }

    else{
        char ch;
        for(int i=0;i<str.size();i++){
            ch=tolower(str[i]);
            cout<<ch;
        }
    }
    
    return 0;
}