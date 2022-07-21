#include<bits/stdc++.h>
using namespace std;

#define loop(i,l,h) for(int i=l;i<h;i++)
#define loop1(i,l,h) for(int i=l;i<=h;i++)
#define looprev(i,h,l) for(int i=h;i>=l;i--)
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define sp " "
#define endl "\n"

typedef long long int ll;
typedef long double ld;


int main(){

	tle;


	int testcase=1; 
	cin>>testcase;
	while(testcase--)
	{
		int n,x;
		cin>>n>>x;

		if(n <= x){
			cout<<"0"<<endl;
		}
		else{
			int sum=n-x;
			if(sum%4==0){
				cout<<sum/4<<endl;
			}
			else{
				cout<<(sum/4)+1<<endl;
			}
		}
			
	}
	
	return 0;
		
}