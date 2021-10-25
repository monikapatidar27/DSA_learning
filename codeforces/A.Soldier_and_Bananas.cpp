#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int k,n ,w; cin>>k>>n>>w;
    int sum=0;
    for(int i=1; i<=w; i++){
		sum = sum+(i*k);
	}
	if(sum<= n){
		cout <<0<<endl;
	}
	else
     cout << sum - n << endl;
    return 0;
}
