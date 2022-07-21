// Problem Link: 
/* Puneet Dwivedi (pdwivedi294@gmail.com)*
codechef : pdwivedi294
codeforces : Puneet_04
*/

#include<bits/stdc++.h>
using namespace std;

#define loop(i, l, h) for(int i = (l);i < (h); i++)
#define loop0(i, n) for(int i = 0; i < n; i++)
#define loop1(i, n) for(int i = 1; i <= n; i++)
#define logarr(arr, a, b) for(int z = (a); z < (b); z++) cout << (arr[z]) << " "; cout << endl;
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



// a to the power b under modulo m
ll exponent(ll a, ll b, ll m){
    ll res = 1; 
    while (b > 0){
        if (b & 1)res = (res * a) % m; 
        a = (a * a) % m; 
        b = b >> 1;
    } 
    return res;
}

ll inverse(ll a, ll m){
    return exponent(a, m-2, m);
} //a  inverse under modulo m 

ll mod_addition(ll a, ll b, ll m){
    a = a % m; 
    b = b % m; 
    return (((a + b) % m) + m) % m;
}// (a +b)%m

ll mod_multiplication(ll a, ll b, ll m){
    a = a % m; 
    b = b % m; 
    return (((a * b) % m) + m) % m;
}// (a*b)%m

ll mod_subtraction(ll a, ll b, ll m){
    a = a % m; 
    b = b % m; 
    return (((a - b) % m) + m) % m;
}// (a-b)%m

ll mod_division(ll a, ll b, ll m){
    a = a % m; 
    b = b % m; 
    return (mod_multiplication(a, inverse(b, m), m) + m) % m;
}  // (a/b)%m  - m should be prime

/* *************************** */


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#define debugvctr(x) cerr << #x << " "; print(x); cerr << endl;
#else
#define debug(x)
#endif 

template<class T> void print(vector<T> x){
    cerr << "{ ";
    for(T el : x){
        cerr << el << " ";
    }
    cerr << "}";
}

inline void errorprint(){
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
}

inline void fast_input_output(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

inline void in_op(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

inline void ggl_print(int &testcase){
    cout << "Case #" << testcase++ << ": " ;
}
/* *************************** */
bool isvowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
    return false;
}



int main(){
    
    fast_input_output();
    errorprint();
    // in_op();
        
        
    // int testcase = 1;    
    int _=0;
    cin>>;--;
    do{
        ll n; cin >> n;
        string st;
        cin >> st;
        bool res = true;
        for(ll i = 0; i < n-3; i++){
            if(!isvowel(st[i]) && !isvowel(st[i+1]) && !isvowel(st[i+2]) && !isvowel(st[i+3])){
                 res = false; 
                 break;
            }
        }   
        
        if(res) cout << ys;
        else     cout << no;
        cout << endl;

    
   
        
    }while(_--);


    return 0;
}