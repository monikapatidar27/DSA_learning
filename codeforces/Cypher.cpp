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
        int arr[n];
        loop(i,l,n){
            cin>>arr[i];
        }
        int x;
       
        string b;
        for(int i=0;i<n;i++){
            cin>>x>>b;
             int u=0,d=0;
            for(int k= 0; k<x; k++){
            if(b[k] == 'U')u++;
            else d++;
            }
            int y=d-u;
            arr[i]+=y;
            if(arr[i]>9) arr[i]%=10;
            if(arr[i]<0){
                arr[i]%=10;
                if(arr[i] < 0) arr[i]=9+1+arr[i];
            }
            cout<<arr[i]<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}