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
        int x;
        cin>>x;
        int ct=0;
        int nt=0;
        int dt=0;
       string arr;
       cin>>arr;
        for(int i=0;i<arr.length();i++){
            if( arr[i]=='c'||arr[i]=='C'){
                ct++;
            }
            else if(arr[i]=='n'||arr[i]=='N'){
                nt++;
            }
            else{
                dt++;
            }
        }
        if(ct>nt ){
            cout<<x*60<<endl;
        }
        else if(ct<nt){
            cout<<x*40<<endl;
        }
        else {
            cout<<x*55<<endl;
        }
        
        

    }
    return 0;
}