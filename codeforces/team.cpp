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
	 int cap=0;
	 int s=0;
	 for(int i=0;i<n;i++){
		 int a,b;
		 cin>>a>>b;
		 s-=a;
		 s+=b;
		 cap=max(cap,s);

	 }
	 cout<<cap;

    return 0;
}
 