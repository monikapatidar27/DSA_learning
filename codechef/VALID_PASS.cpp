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
        int c=0,s=0,num=0,v=0;
        loop(i,l,n){
            if(str[i]<=90 && str[i]>=65){
                c++;
            }
            else if(str[i]<=122 && str[i]>=97){
                s++;
            }
            else if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0'){
                num++;
            }
            else{
                v++;
            }

        }
        if(c>=1 && s>=3 && num >=2 && v>=1){
                cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}