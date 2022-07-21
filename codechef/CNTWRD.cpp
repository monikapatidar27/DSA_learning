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
        long long n,m;
        cin>>n>>m;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        double sum=0;
        for(int i=(n-m+1);i<n;i++){
            sum+=arr[i];
        }
       //cout<<sum<<endl;
        long long c=0;
        for(int j=0;j<(n-m+1);j++){
            c++;
        }
       //cout<<arr[c/2];
       float res=0;
        if(c%2){
            res=((arr[c/2]+arr[(c+1)/2])/2.0);
        }
        else 
        res=arr[c/2];

        cout<<sum+res<<endl;
    }
    return 0;
}