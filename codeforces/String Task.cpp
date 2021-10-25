#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
      int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[2*n];
        int sum=0;
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sum/=n;
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++){
                if(i != j && arr[i]+arr[j]==sum){
                    arr[i]=-1;
                    arr[j]=-1;
                }
            }
        }
        int count=0;
        for(int i=0;i<2*n;i++){
            if(arr[i]==-1)
            count++;
        }
        if(count ==2*n)cout<<"PERFECT";
        else cout<<"IMBALANCED";
        cout<<endl;

    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
    return 0;
}