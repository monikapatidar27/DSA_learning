#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    string s;
    cin>>s;
    char arr[100];
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            arr[j]=s[i];
            j++;

        }
    }
sort(arr,arr+j);
for(int i=0;i<j;i++){
    if(i==j-1) 
    cout<<arr[i]<<endl;
    else
    cout<<arr[i]<<"+";
    }
        return 0;
}