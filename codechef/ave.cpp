#include <bits/stdc++.h>
using namespace std;
#define loop(i, l, n) for (int i = 0; i < n; i++)
#define loop1(i, l, n) for (int i = 1; i <= n; i++)
#define endl "\n"
typedef long long int ll;
#define sp " "

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase = 1;
    cin >> testcase;
    while (testcase--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        loop(i, l, n)
        {
            cin >> arr[i];
        }
        
        sort(arr,arr+n);
        int minn=arr[0];
        int maxx=arr[n-1];
        int c=0;
        loop(i,l,n){
            if(arr[i] == x){
                c++;
            }
        }
        if(c>0){
            cout<<"YES"<<endl;
        }
        else if(minn<x && maxx > x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}