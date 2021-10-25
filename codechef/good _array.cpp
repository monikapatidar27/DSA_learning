#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int k;
		cin>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
		cin>>arr[i];
		}
		int sum=0;
		int res = arr[0]; 
		for (int i = 1; i < n; ++i){
			res = max(res, arr[i]); 	
		}
		
		for(int i=0;i<n;i++){
			sum+=(res-arr[i]);
		}
		if(sum <= k)
		cout<<"Yes"<<endl;
		else 
		cout<<"No"<<endl;
		
	
	}

	return 0;
}