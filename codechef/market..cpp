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
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        int arr[3];
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        sort(arr,arr+3);
        int res=0;
        res+=((x-1)*arr[0])+arr[1];
        cout<<res<<endl;
    }
    return 0;
}