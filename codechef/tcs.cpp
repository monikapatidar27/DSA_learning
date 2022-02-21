#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        int a,b,c,p,q,r;
		cin>>a>>b>>c;
		cin>>p>>q>>r;
		int dt=a+b+c;
		int st=p+q+r;
		if(dt>st)cout<<"dragon"<<endl;
		else if(st>dt)cout<<"Sloth"<<endl;
		else if(dt==st){
			if(a>p)cout<<"dragon"<<endl;
			else if(p>a)cout<<"Sloth"<<endl;
		
			else if(a==p){
				if(b>q)cout<<"dragon"<<endl;
				else if(q>b)cout<<"Sloth"<<endl;
				else cout<<"Tie"<<endl;
			}
		}
    }
    return 0;
}