#include<bits/stdc++.h>
using namespace std;

#define loop(i,l,h) for(int i = (l);i < (h); i++)
#define loop0(i, n) for(int i = 0; i < n; i++)
#define loop1(i, n) for(int i = 1; i <= n; i++)
#define logarr(arr,a,b) for(int z = (a); z < (b); z++) cout<<(arr[z])<<" ";cout<<endl;
#define endl "\n"
#define vi vector<int>
#define vll vector<long long>
#define mod  1000000007
#define mod1 998244353
#define INF 1e18
#define all(x) (x).begin(), (x).end()
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define ys "YES"
#define no "NO"
#define sp " "

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;


void file_input_output(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

void show_execution_time(clock_t &begin, clock_t &end){
    #ifndef ONLINE_JUDGE
        cout << "\n\nFinished in " << double(end-begin)/CLOCKS_PER_SEC*1000 << " ms";
    #endif
}

/* ******************* */


bool comp(pll el1, pll el2){
	if(el1.second < el2.second) return true;
	else if(el1.second == el2.second){
		if(el1.first < el1.first) return true;
	}

	return false;
}


int main(){
    clock_t begin=clock();
    

    int t=0;
    //cin>>t;t--;
    do{
       	ll n; cin >> n;
       	vector<pll> arr(n);

       	loop0(i, n){
       		int x, y; cin >> x >> y;
       		arr[i] = {x, y};
       	}

       	sort(all(arr), comp);

       	ll can_attend = 1;
       	ll free_time = arr[0].second;
       	ll i = 1;
       	while(i < n){
       		if(arr[i].first < free_time) i++;
       		else{
       			can_attend++;
       			free_time = arr[i].second;
       			i++;
       		}
       	}

       	cout << can_attend << endl;


       
    }while(t--);


    
    return 0;
}