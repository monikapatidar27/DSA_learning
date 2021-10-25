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
int maxva=0;
int minva=1000;
int maxi=0;
int mini=0;
cin>>n;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
if(x>maxva){
	maxi=i;
	maxva=x;
}
 if(x<=minva){
	mini=i;
	minva=x;
 }
}
if(maxi>mini){
	cout<<(maxi-1)+(n-mini)-1;
}
else{
	cout<<(maxi-1)+(n-mini);

}




    return 0;
}