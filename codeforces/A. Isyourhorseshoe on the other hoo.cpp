#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int s1,s2,s3,s4,s[100],c=0;
    for(int i =0;i<4;i++){
        cin>>s[i];
    }
    sort(s,s+4);
    for(int i=0; i<4; i++)
    {

        if(s[i]==s[i+1])
            c++;
    }
   cout<<c<<endl;
  
    return 0;
}