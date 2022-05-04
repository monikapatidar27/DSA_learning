// #include<bits/stdc++.h>
// using namespace std;

// #define loop(i,l,h) for(int i = (l);i < (h); i++)
// #define loop0(i, n) for(int i = 0; i < n; i++)
// #define loop1(i, n) for(int i = 1; i <= n; i++)
// #define logarr(arr,a,b) for(int z = (a); z < (b); z++) cout<<(arr[z])<<" ";cout<<endl;
// #define endl "\n"
// #define vi vector<int>
// #define vll vector<long long>
// #define mod  1000000007
// #define mod1 998244353
// #define INF 1e18
// #define all(x) (x).begin(), (x).end()
// #define maxpq priority_queue<int>
// #define minpq priority_queue<int, vector<int>, greater<int>>
// #define ys "YES"
// #define no "NO"
// #define sp " "

// typedef long long int ll;
// typedef unsigned long long ull;
// typedef long double ld;
// typedef pair<int,int> pii;
// typedef pair<ll,ll> pll;


// inline void file_input_output(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif // ONLINE_JUDGE
// }

// inline void show_execution_time(clock_t &begin, clock_t &end){
//     #ifndef ONLINE_JUDGE
//         cout << "\n\nFinished in " << double(end-begin)/CLOCKS_PER_SEC*1000 << " ms";
//     #endif
// }

// /* *************************** */

// bool how_much(ll w, ll x, ll y, ll z, ll p, ll q, ll r, ll s, ll amt, ll mid){
// 	// for first 
// 	if(mid*w > p) amt -= ((mid*w) - p);
// 	if(mid*x > q) amt -= ((mid*x) - q);
// 	if(mid*y > r) amt -= ((mid*y) - r);
// 	if(mid*z > s) amt -= ((mid*z) - s);
	
// 	if(amt < 0) return false;
// 	return true;
// }


// int main(){
//     clock_t begin=clock();
//     // file_input_output();


//     int t=0;
//     cin>>t;t--;
//     do{
    	
//     	ll w, x, y, z;
//     	cin >> w >> x >> y >> z;
//     	ll p, q, r, s;
//     	cin >> p >> q >> r >> s;
//     	ll amt; 
//     	cin >> amt;
    	
//     	ll lo = 0;
//     	ll hi = 10000000;
//     	ll res = 0;
//     	while(lo <= hi){
//     		ll mid = lo + (hi-lo)/2;
    		
//     		if(how_much(w,x,y,z,p,q,r,s,amt,mid)){
//     			res = mid;
//     			lo = mid + 1;
//     		}
//     		else hi = mid - 1;
//        	}
       	
//        	cout << res << endl;

       
//     }while(t--);


//     clock_t end=clock();
//     // show_execution_time(begin, end);

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 

bool how_much(ll w, ll x, ll y, ll z, ll p, ll q, ll r, ll s, ll amt, ll mid){
	 
	if(mid*w > p) amt -= ((mid*w) - p);
	if(mid*x > q) amt -= ((mid*x) - q);
	if(mid*y > r) amt -= ((mid*y) - r);
	if(mid*z > s) amt -= ((mid*z) - s);
	
	if(amt < 0) return false;
	return true;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        ll w, x, y, z;
    	cin >> w >> x >> y >> z;
    	ll p, q, r, s;
    	cin >> p >> q >> r >> s;
    	ll amt; 
    	cin >> amt;
    	
    	ll lo = 0;
    	ll hi = 10000000;
    	ll res = 0;
    	while(lo <= hi){
    		ll mid = lo + (hi-lo)/2;
    		
    		if(how_much(w,x,y,z,p,q,r,s,amt,mid)){
    			res = mid;
    			lo = mid + 1;
    		}
    		else hi = mid - 1;
       	}
       	
       	cout << res << endl;
    }
    return 0;
}