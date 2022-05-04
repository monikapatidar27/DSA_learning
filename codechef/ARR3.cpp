#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n],c[n];
        loop(i,l,n){
            cin>>a[i];
        }
        loop(i,l,n){
            cin>>b[i];
        }
        loop(i,l,n){
            cin>>c[i];
        }
        ll k1,k2;
        ll sum=0;
        cin>>k1>>k2;
        int e=0,f=0,g=0;

        loop(i,l,n){
            if(a[i]>= b[i] && a[i]>=c[i]){
                // e++;
                if(e<k1){
                    e++;
                    sum=sum+a[i];
                }
                //sum=sum+a[i];
            }
            else if(b[i]>=a[i] && b[i]>=c[i]){
                //f++;
                if(f<k2){
                    f++;
                    sum=sum+b[i];
                }
                //sum=sum+b[i];
            }
            else{
                sum=sum+c[i];
            }
        }
        cout<<sum<<endl;
        //cout<<e<<f<<g;
    }
    return 0;
}