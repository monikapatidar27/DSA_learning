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
        int minn=arr[0];
        int idn=0;
        int maxx=arr[0];
        int last=0;
        for(int i=0;i<n;i++){
            if(arr[i]< minn){
                minn=arr[i];
                idn=i;
            }
            if(arr[i]> maxx){
                maxx=arr[i];
                last=i;
            }
        }
        if(idn > last){
             cout<<(idn-0)+((n-1)-last)-1<<endl;
        }
        else
            cout<<(idn-0)+((n-1)-last)<<endl;

    }
    return 0;
}