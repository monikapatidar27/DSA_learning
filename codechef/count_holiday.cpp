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
        int n;cin>>n;
        int c=8;
        int arr[n];
        
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            // if(arr[i]==6||arr[i]==13||arr[i]==20||arr[i]==27||arr[i]==7||arr[i]==14||arr[i]==21||arr[i]==28){
            //     c--;
            // }
            //  else{
            //     c++;
            // }
            if(arr[i] %7 !=0 && arr[i]%7 != 6 ) 
                c++;
        }
        cout<<c<<endl;

    }
    return 0;
}