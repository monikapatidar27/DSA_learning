#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
bool check_prime(int x){

    if (x == 2 || x==3){
        return true;
    }

    for(int i=2; i*i<= x; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;


    
    if(!check_prime(m)){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=n+1; i<=m; i++){
            
            if(check_prime(i)){
                if(i == m){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
                break;
            }
        }
    }
  

    return 0;
}