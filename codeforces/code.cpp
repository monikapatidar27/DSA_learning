#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[10];
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
        int ca=0,cb=0;
        for(int i=0;i<10;i++){
            if(i%2==0){
            if(arr[i]==1){
                cb++;
            }
        }
        else{
            if(arr[i]==1)
            ca++;
        }
        }

        if(cb>ca) 
        cout<<"1"<<endl;
        else if(ca==cb) 
        cout<<"0"<<endl;
        else 
        cout<<"2"<<endl;

    }
    return 0;
}