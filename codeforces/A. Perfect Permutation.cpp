#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int n;

    cin>>n;
    if(n%2==1) 
    cout<<-1<<endl;
    else {
	for(int i=0;i<n;i++){
	   if(i%2==0)  cout<<i+2;
	   else cout<<i;
	   cout<<sp;
	}
	
	
}
    return 0;
}