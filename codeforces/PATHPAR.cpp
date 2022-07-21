#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,h) for(int i=l;i<h;i++)
#define loop0(i,n) for(int i=0;i<n;i++)
#define loop1(i,n) for(int i=1;i<=n;i++)
#define revloop(i,h,l) for(int i =h; i>=l; i--)
#define endl "\n"
#define sp " " 
typedef long long int ll;
typedef long double lld;

template <class T> T lcm(T a, T b){
    return (a*b)/__gcd(a,b);
}







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        int n,k;
        cin>>n>>k;
        if(k%2 == 1 && n%2 == 1){
            
                cout<<"YES"<<endl;
            
        }
        else if(n%2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}