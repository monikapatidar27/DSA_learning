#include <iostream>
using namespace std;
long int fact(int n)
{
    long f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int main() {
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	int n,x,y;
	cin>>n>>x>>y;
	long long int ans1=fact(n)/(fact(x)*fact(n-x));
	long long int ans2=fact(n)/(fact(y)*fact(n-y));
	cout<<ans1*ans2<<endl;
	}
	return 0;
}
