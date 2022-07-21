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
		//cout<<"hello";
		int a,b,c;
		cin>>a>>b>>c;;
		int total=a+b+c;
		if(total >= 100 && a >=10 && b >= 10 && c >= 10){
			cout<<"PASS"<<endl;
		}
		else{
			cout<<"FAIL"<<endl;
		}

			
	}
	
	return 0;
}