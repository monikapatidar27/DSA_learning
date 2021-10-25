#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<(arr[0]+arr[1])<<endl;
    }
	
	return 0;
}
/*Input:
1
4
5 1 3 4

Output:
4
*/
 