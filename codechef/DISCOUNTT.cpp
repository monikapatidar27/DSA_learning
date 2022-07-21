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
        int n;
        cin>>n;
        int x,y;
        cin>>x>>y;
        int res=0,sum=0;
        int arr[n];
        loop(i,l,n){
            cin>>arr[i];
            sum=sum+arr[i];
        }//cout<<sum;
        loop(i,l,n){
            if(arr[i] > y){
                res+= arr[i] - y;
            }
        }
        if(res + x < sum){
            cout<<"COUPON"<<endl;
        }
        else{
            cout<<"NO COUPON"<<endl;
        }
    }
    return 0;
}
