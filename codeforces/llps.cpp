#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int a[30]={0}, flag=0;
    char s[15];
    cin>>s;
    for(int i=0; i<strlen(s); i++) a[s[i]-'a']++;
    for(int i=27; i>=0; i--){
    if(a[i]>0 && flag==0) 
        while(a[i]>0) 
            cout<< i+'a';
            a[i]--;
            flag=1;
    }        
    
   return 0;
}