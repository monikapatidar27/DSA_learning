#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 


bool isvowel(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) 
        return true;
    return false;


}
      
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
        
        int c=true;
        for(int i=0;i<n-3;i++){
            if(!isvowel(str[i]) && !isvowel(str[i+1]) && !isvowel(str[i+2]) && !isvowel(str[i+3])){
                c=false;
                break;
            }
        }
       if(c)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}