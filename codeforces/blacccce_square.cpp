#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int n, h, m, a, b, cash=1, ma=1;
    cin>>n;
    for(int i=0; i<n; i++) {
       cin>>h>>m;
       if(i==0){
        a=h; 
        b=m;
        } 
        else {
            if(a==h && b==m) 
            cash++;
            else {
                a=h, b=m;
                if(cash>ma) 
                ma=cash;
                cash=1;
            }
            if(cash>ma) 
            ma=cash;
        }
    }
    cout<<ma<<endl;
  
    
    return 0;
}