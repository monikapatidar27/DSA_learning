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
		int a,b,c;
		cin>>a>>b>>c;
		if(a > b && a > c){
			cout<<"Alice"<<endl;
			
		}
		else if(b > a && b > c){
			cout<<"Bob"<<endl;
		}
		else{
			cout<<"Charlie"<<endl;
		}
	}
	
	return 0;
	
}
