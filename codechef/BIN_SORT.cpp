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
        string str;
        cin>>str;
        int ind1=-1,ind2=-1;
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                ind1=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(str[i]=='0'){
                ind2=i;
                break;
            }
        }
        int f=0,l=0;
        for(int i=ind1;i<=ind2;i++){
            if(str[i]=='1'){
                f++;
            }
            else if(str[i]=='0')
                l++;
        }
        //cout<<ind1<<ind2<<endl;
        cout<<min(f,l)<<endl;
    }
    return 0;
}