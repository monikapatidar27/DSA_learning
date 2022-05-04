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
        int n,x;
        cin>>n>>x;
        int a=x/3;
        int b=0;
        if(x%3==1){
            b=b+2;
        }
        else if(x%3==2){
            b=b+1;
        }
        if(b!= 0){
            a++;
        }
        if(a+b>n){
            cout<<"NO"<<endl;
           
        }
        else{
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<n-a-b<<endl;
        }
    }
    return 0;
}