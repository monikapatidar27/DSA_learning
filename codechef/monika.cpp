#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int isEqpoint(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int left_sum=0;
    for(int i=0;i<n;i++){
       
        left_sum+=arr[i];
        sum-=arr[i];
        if(left_sum==sum)
            return i+1;
    }
        return -1;
}
int main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n+1];
         
        for(int i=0;i<n+1;i++){
            cin>>arr[i];
        }
        cout<<isEqpoint(arr,n+1)<<endl;
       
    }
    return 0;
}

// #include<bits/stdc++.h>
// #define ll long long
// #define ld long double
// #define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define pb push_back
// #define vec vector
// #define ist insert 
// #define endl "\n"
// #define f(i,l,n) for(int i=l;i<n;i++)
// #define all(v) (v).begin(), (v).end()
// #define pi 3.141592653589793238462643383279502884197169399375105820974944;
// using namespace std;

// vector<int> rotate(vector<int>& a,int k)
// {
//   for (int i = 0; i<k; ++i)
//   {
//     a.pb(a[0]);
//     a.erase(a.begin());
//   }
//   return a;
// }
// bool comp(pair<ll,ll>a,pair<ll,ll>b)
// {
//   return a.second<b.second;
// }

// ll lcm(ll a,ll b)
// {
//   return (a/__gcd(a,b))*b;
// }

// ll maxProd(ll n)
// {
// 	if (n == 2 || n == 3) return (n-1);

// 	ll res = 1;
// 	while (n > 4)
// 	{
// 		n -= 3;
// 		res *= 3; 
// 	}
// 	return (n * res); 
// }

// ll tria(vec<int> a)
// {
// 	 	sort(all(a));
//         for (ll i = a.size() - 3; i >= 0; --i)
//             if ((a[i] + a[i+1]) > a[i+2])
//                 return (a[i] + a[i+1] + a[i+2]);
//         return 0;

// }
// int main()
// {
// 	fast;
//   	ll t;
//   	cin>>t;
//   	while(t--)
//   	{
//   		ll n;
//   		cin>>n;
//   		vec<int>a;
//   		ll x;
//   		f(i,0,n+1)
//   		{
//   			cin>>x;
//   			a.pb(x);
//   		}
//   		ll sum=accumulate(all(a),0),ans=0,c=0,flag=0;
//   		f(i,0,n+1)
//   		{
//   			ans+=a[i];
//   			sum=sum-a[i];
//   			if(ans==sum)
//   			{
//   				c=i;
//   				flag=1;
//   				break;
//   			}
//   		}
//   		if(flag==1)
//   			cout<<c+1<<endl;
//   		else
//   			cout<<-1<<endl;

// 	}
//   return 0;
// }